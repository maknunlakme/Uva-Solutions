#include<iostream>
#include<string>
#include<map>
using namespace std;

map<char,char>mark;
string line;

int main()
{
    mark['e']='q';
    mark['r']='w';
    mark['t']='e';
    mark['y']='r';
    mark['u']='t';
    mark['i']='y';
    mark['o']='u';
    mark['p']='i';
    mark['[']='o';
    mark[']']='p';
    mark['d']='a';
    mark['f']='s';
    mark['g']='d';
    mark['h']='f';
    mark['j']='g';
    mark['k']='h';
    mark['l']='j';
    mark[';']='k';
    mark['\'']='l';
    mark['c']='z';
    mark['v']='x';
    mark['b']='c';
    mark['n']='v';
    mark['m']='b';
    mark[',']='n';
    mark['.']='m';
    mark[' ']=' ';
    getline(cin,line);
    for(auto i:line)
    {
        cout<<mark[tolower(i)];
    }
    cout<<endl;
    return 0;
}
