#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<assert.h>
#include<regex>

using namespace std;

void filter(vector<string> & lines,vector<string> & results)
{
    regex reg_exp("([0-9]|[a-f]){8}:.*?([0-9]|[a-f]){8}.+$");
    smatch reg_result;
    vector<string> temp;
    for(int i=0;i<lines.size();i++)
    {
        bool flag = regex_search(lines[i],reg_result,reg_exp);

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
    output.open("result.txt",ios::out);
    for(int i=0;i<instructions.size();i++)
    {
        output << instructions[i] << endl;
    }

    file.close();
    output.close();

}