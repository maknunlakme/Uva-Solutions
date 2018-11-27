#include<iostream>
#include<map>
#include<string>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    string line,temp;
    map<string,int>index;
    map<string,int>::iterator it;
    int i,test,total;
    cin>>test;
    getchar();
    getline(cin,temp);
    while(test--)
    {
        total=0;
        while(1)
        {
            getline(cin,line);
            if(line.empty())
            {
                break;
            }
            if(!index[line])
            {
                index[line]=1;
            }
            else
            {
                index[line]++;
            }
            total++;
        }
        //cout<<"total: "<<total<<endl;
        for(it=index.begin();it!=index.end();it++)
        {
            cout<<fixed<<setprecision(4)<<it->first<<" "<<(static_cast<float>(it->second)/total)*100<<endl;
        }
        if(test!=0)
        {
            cout<<endl;
        }
        index.clear();
    }
    return 0;
}
