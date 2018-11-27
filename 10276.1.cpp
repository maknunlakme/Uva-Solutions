#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int ans,n;
int arr[60];

void rec(int pos)
{
    int i,temp,blah;
    for(i=0;i<n;i++)
    {
        temp=arr[i]+pos;
        blah=sqrt(temp);
        //cerr<<"RR "<<i<<" "<<temp<<" "<<blah<<endl;
        if((blah*blah)==temp or arr[i]==0)
        {
            arr[i]=pos;
            ans++;
            rec(pos+1);
            return;
        }
    }
    return;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        memset(arr,0,sizeof arr);
        ans=0;
        rec(1);
        cout<<ans<<endl;
    }
    return 0;
}
