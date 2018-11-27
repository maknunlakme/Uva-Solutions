#include<iostream>
#include<vector>
#include<sstream>
#include<cstring>
using namespace std;

vector<int>suitcase;
int dp[300][30];
int n;

int rec(int weight,int pos)
{
    if(weight==0 or pos==n) return 0;
    if(dp[weight][pos]==-1)
    {
        if(suitcase[pos]>weight)
        {
            dp[weight][pos]=rec(weight,pos+1);
        }
        else
        {
            dp[weight][pos]=max(suitcase[pos]+rec(weight-suitcase[pos],pos+1),rec(weight,pos+1));
        }
    }
    return dp[weight][pos];
}

int main()
{
    int test,a,total,answer;
    bool yes;
    cin>>test;
    string line;
    cin.get();
    while(test--)
    {
        getline(cin,line);
        stringstream ss(line);
        suitcase.clear();
        total=0;
        yes=true;
        while(ss>>a)
        {
            suitcase.push_back(a);
            total+=a;
        }
        if(total%2==0)
        {
            n=suitcase.size();
            memset(dp,-1,sizeof dp);
            answer=rec(total/2,0);
            if(answer*2!=total) yes=false;

        }
        else yes=false;
        //cerr<<"T "<<total<<" "<<answer<<endl;
        if(yes==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
