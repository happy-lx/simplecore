#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<assert.h>
#include<vector>
#include<string>

using namespace std;

int main(int argc,char** argv)
{

    ifstream in;
    ofstream out;
    vector<string> lines;
    string line;

    assert(argc == 3);

    in.open(argv[1],ios::in);
    out.open(argv[2], ios::out);

    while(getline(in,line))
    {
        lines.push_back(line);
    }

    for(int i=0;i<lines.size();i++)
    {
        for(int j=14;j>=0;j = j-2)
        {
            out << lines[i].substr(j,2) << endl;
        }
    }

    return 0;
}