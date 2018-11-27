#include<iostream>
#include<set>
#include<string>
#include<unordered_map>
using namespace std;

set<string>arr;
set<string>::iterator it;
unordered_map<string,int>mark;

int main()
{
    int i;
    string temp,blah;
    while(cin>>temp)
    {
        for(i=0; i<temp.size(); i++)
        {
            if(temp[i]>='a' and temp[i]<='z')
            {
                blah.push_back(temp[i]);
            }
            else if(temp[i]>='A' and temp[i]<='Z')
            {
                blah.push_back(temp[i]+32);
            }
            else if(temp[i]=='-')
            {
                blah.push_back(temp[i]);
            }
            else
            {
                if(blah.size())
                {
                    if(blah[blah.size()-1]!='-')
                    {
                        arr.insert(blah);
                        blah.clear();
                    }
                    else
                    {
                        blah.pop_back();
                    }
                }
            }
        }
        //cerr<<"R "<<blah<<endl;
        if(blah.size())
        {
            if(blah[blah.size()-1]!='-')
            {
                arr.insert(blah);
                blah.clear();
            }
            else
            {
                blah.pop_back();
            }
        }
    }
    for(it=arr.begin(); it!=arr.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}
