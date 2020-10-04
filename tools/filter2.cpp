#include<fstream>
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<assert.h>
#include<regex>
#include<stdlib.h>

using namespace std;

void filter(vector<string> & lines,vector<string> & results)
{
    regex reg_exp("([0-9]|[a-f]){8}:.*?([0-9]|[a-f]){8}.+$");
    smatch reg_result;
    vector<string> temp;
    for(int i=0;i<lines.size();i++)
    {
        bool flag = regex_search(lines[i],reg_result,reg_exp);

        //Disassembly of section .text:
        // if(strcmp(lines[i].substr(0,29).c_str() , "Disassembly of section .text:")  == 0 )
        // {
        //     char* junck[10];

        //     string txt_init_end = lines[i-2].substr(0,8);
        //     string txt_start = lines[i+2].substr(0,8);

        //     long end = strtol(txt_init_end.c_str(),junck,16);
        //     long start = strtol(txt_start.c_str(),junck,16);
        //     long times  = ((start - end) / 4) - 1;

        //     for(int j=0;j<times;j++)
        //     {
        //         temp.push_back("00000000");
        //     }

        // }
        if(flag)
        {
            temp.push_back(reg_result.str(0).substr(10,8)) ;
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        for(int j=6;j>=0;j=j-2)
        {
            results.push_back(temp[i].substr(j,2));
        }
    }
    
}

int main(int argc,char** argv)
{
    assert(argc == 2);

    ifstream file;
    file.open(argv[1],ios::in);
    vector<string> lines;
    string line;
    ofstream output;

    while(getline(file,line))
    {
        lines.push_back(line);
    }
    // for(int i=0;i<lines.size();i++)
    // {
    //     cout << lines[i]<<endl;
    // }
    vector<string> instructions;
    filter(lines,instructions);
    // cout << "fuck" << endl;
    output.open("test1.txt",ios::out);
    for(int i=0;i<instructions.size();i++)
    {
        if(i % 4 == 0 && i != 0)
        {
            output << endl;
        }
        output << instructions[i] << endl;
    }

    file.close();
    output.close();

}