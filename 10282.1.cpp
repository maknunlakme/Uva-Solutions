#include<iostream>
#include<map>
#include<string>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<iterator>
using namespace std;
map<string,string>dictionary;
map<string,int>mark;
vector<string>line;
string a,b;
int main()
{
    while(1)
    {
        getline(cin,a);
        if(a.empty())
        {
            break;
        }
        istringstream iss(a);
        copy(istream_iterator<string>(iss),istream_iterator<string>(),back_inserter(line));
        //cout<<line[0]<<" what "<<line[1]<<endl;
        dictionary[line[1]]=line[0];
        mark[line[1]]=1;
        line.clear();
    }
    while(cin>>b)
    {
        if(mark[b])
        {
            cout<<dictionary[b]<<endl;
        }
        else
        {
            cout<<"eh"<<endl;
        }
    }
    return 0;
}
