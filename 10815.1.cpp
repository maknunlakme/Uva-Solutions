#include<iostream>
#include<set>
#include<string>
using namespace std;

set<string>arr;
set<string>::iterator it;

int main()
{
    int i;
    string temp,blah;
    while(cin>>temp)
    {
        for(i=0;i<temp.size();i++)
        {
            if(temp[i]>='a' and temp[i]<='z')
            {
                blah.push_back(temp[i]);
            }
            else if(temp[i]>='A' and temp[i]<='Z')
            {
                blah.push_back(temp[i]+32);
            }
            else
            {
                if(blah.size())
                {
                    arr.insert(blah);
                    blah.clear();
                }
            }
        }
        //cerr<<"R "<<blah<<endl;
        if(blah.size())
        {
            arr.insert(blah);
            blah.clear();
        }
    }
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}
