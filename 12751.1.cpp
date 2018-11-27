#include<iostream>
using namespace std;
int main()
{
    long long int test,n,k,x,ans,i;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n>>k>>x;
        ans=(n*(n+1))/2;
        ans-=((x+(k-1))*((x+(k-1))+1))/2;
        ans+=(x*(x-1))/2;
        cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
