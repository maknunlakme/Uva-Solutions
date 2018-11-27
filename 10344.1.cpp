#include<iostream>
#include<cstdio>
using namespace std;

int arr[10];
bool taken[10];
bool yes;

void rec(int pos,int ans)
{
    cerr<<"P "<<pos<<" "<<ans<<endl;
    if(pos==5)
    {
        //cerr<<"RR "<<pos<<" "<<ans<<endl;
        if(ans==23) yes=true;
        return;
    }
    for(int i=0;i<5;i++)
    {
        if(taken[i]==false)
        {
            taken[i]=true;
            rec(pos+1,ans+arr[i]);
            rec(pos+1,ans-arr[i]);
            rec(pos+1,ans*arr[i]);
            taken[i]=false;
        }
    }
}


int main()
{
    #ifdef maknun
        //freopen("tempin.txt","r",stdin);
    #endif // maknun
    int i;
    while(1)
    {
        for(i=0;i<5;i++) cin>>arr[i];
        if(arr[0]==0 and arr[1]==0 and arr[2]==0 and arr[3]==0 and arr[4]==0) break;
        yes=false;
        for(i=0;i<5;i++)
        {
            taken[i]=true;
            rec(1,arr[i]);
            taken[i]=false;
        }
        if(yes==true) cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
    return 0;
}
