#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<set>
using namespace std;

string line,temp;
map<string,int>mark;
map<string,string>unmark;
map<string,int>::iterator it;
set<string>blah;
set<string>::iterator itt;

int main()
{
    int i;
    while(cin>>line)
    {
        if(line=="#") break;
        temp.clear();
        for(i=0;i<line.size();i++)
        {
            if(line[i]>='A' and line[i]<='Z')
            {
                temp.push_back(line[i]+32);
            }
            else
            {
                temp.push_back(line[i]);
            }
        }
        sort(temp.begin(),temp.end());
        //cerr<<"TT "<<temp<<endl;
        mark[temp]++;
        unmark[temp]=line;
    }
    for(it=mark.begin();it!=mark.end();it++)
    {
        if(it->second==1)
        {
            blah.insert(unmark[it->first]);
        }
    }
    for(itt=blah.begin();itt!=blah.end();itt++)
    {
        cout<<(*itt)<<endl;
    }
    return 0;
}
