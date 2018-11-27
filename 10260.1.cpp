#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
    list<char>code;
    string line;
    while(cin>>line)
    {
        int length=line.length();
        for(int i=0;i<length;i++)
        {
            if(line[i]=='B'||line[i]=='F'||line[i]=='P'||line[i]=='V')
            {
                code.push_back('1');
            }
            else if(line[i]=='C'||line[i]=='G'||line[i]=='J'||line[i]=='K'||line[i]=='Q'||line[i]=='S'||line[i]=='X'||line[i]=='Z')
            {
                code.push_back('2');
            }
            else if(line[i]=='D'||line[i]=='T')
            {
                code.push_back('3');
            }
            else if(line[i]=='L')
            {
                code.push_back('4');
            }
            else if(line[i]=='M'||line[i]=='N')
            {
                code.push_back('5');
            }
            else if(line[i]=='R')
            {
                code.push_back('6');
            }
            else if(line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U'||line[i]=='H'||line[i]=='W'||line[i]=='Y')
            {
                code.push_back('0');
            }
        }
        code.unique();
        while(!code.empty())
        {
            if(code.front()!='0')
            {
                cout<<code.front();
            }
            code.pop_front();
        }
        cout<<endl;
    }
    return 0;
}
