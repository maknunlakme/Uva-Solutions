#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#include<climits>
using namespace std;

int d[40],v[40];
int dp[1100][40];
bool track[1100][40];
int n,w,t;
vector<int>a;

int rec(int timee,int pos)
{
    if(timee<0 or pos==n) return 0;
    int temp,weight;
    if(dp[timee][pos]==-1)
    {
        temp=rec(timee,pos+1);
        weight=3*w*d[pos];
        if(timee-weight>=0)dp[timee][pos]=max(v[pos]+rec(timee-weight,pos+1),temp);
        else dp[timee][pos]=temp;
        if(dp[timee][pos]>temp) track[timee][pos]=1;
    }
    return dp[timee][pos];
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int i,counter=0;
    while(cin>>t>>w>>n)
    {
        if(counter!=0) cout<<endl;
        counter++;
        memset(dp,-1,sizeof dp);
        memset(track,0,sizeof track);
        for(i=0; i<n; i++) cin>>d[i]>>v[i];
        a.clear();
        cout<<rec(t,0)<<endl;
        for(i=0; i<n; i++)
        {
            if(track[t][i]==1 and t-3*w*d[i]>=0)
            {
                a.push_back(i);
                t-=(3*w*d[i]);
            }
        }
        cout<<a.size()<<endl;
        for(i=0; i<a.size(); i++)
        {
            cout<<d[a[i]]<<" "<<v[a[i]]<<endl;
        }
    }
    return 0;
}
