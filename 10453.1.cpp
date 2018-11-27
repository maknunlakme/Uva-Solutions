#include<iostream>
#include<cstring>
#include<string>
#define X 1010
using namespace std;

string line;
int dp[X][X];

int rec(int l,int r)
{
    if(l>r) return 0;
    int &ans=dp[l][r];
    if(ans==-1)
    {
        if(line[l]==line[r])
        {
            ans=rec(l+1,r-1);
        }
        else
        {
            ans=min(rec(l+1,r),rec(l,r-1))+1;
        }
    }
    return ans;
}

void print_rec(int l,int r)
{
    if(l==r)
    {
        cout<<line[l];
        return;
    }
    if(l>r) return;
    int &ans=dp[l][r];
    if(ans!=-1)
    {
        if(line[l]==line[r])
        {
            cout<<line[l];
            print_rec(l+1,r-1);
            cout<<line[r];
        }
        else
        {
            if(ans==rec(l+1,r)+1)
            {
                cout<<line[l];
                print_rec(l+1,r);
                cout<<line[l];
            }
            else
            {
                cout<<line[r];
                print_rec(l,r-1);
                cout<<line[r];
            }
        }
    }
}



int main()
{
    while(cin>>line)
    {
        memset(dp,-1,sizeof dp);
        cout<<rec(0,line.size()-1)<<" ";
        print_rec(0,line.size()-1);
        cout<<endl;
    }
    return 0;
}
