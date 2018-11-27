#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#define X 310
using namespace std;

long long dp[X];
vector<int>arr;

int rec()
{
    for(i=1;i<=coin;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(j>=i)
            {
                way[j]+=way[j-i];
            }
        }
    }
}


int main()
{
    string line;
    int temp;
    while(getline(cin,line))
    {
        memset(dp,-1,sizeof dp);
        arr.clear();
        stringstream ss(line);
        while(ss>>temp)
        {
            //cerr<<"DDD "<<temp<<endl;
            arr.push_back(temp);
        }
        if(arr.size()==1)
        {
            cout<<rec(arr[0],arr[0])<<endl;
        }
        else if(arr.size()==2)
        {
            cout<<rec(arr[0],arr[1])<<endl;
        }
        else
        {
            cout<<rec(arr[0],arr[2])-rec(arr[0],arr[1])<<endl;
        }
    }
    return 0;
}
