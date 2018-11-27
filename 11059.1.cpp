#include<iostream>
using namespace std;

long long arr[30];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    long long n,test=0,ans,maxi,i,j,k;
    while(cin>>n)
    {
        test++;
        maxi=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                ans=arr[i];
                for(k=i+1;k<=j;k++)
                {
                    ans*=arr[k];
                }
                maxi=max(ans,maxi);
            }
        }
        cout<<"Case #"<<test<<": The maximum product is "<<maxi<<"."<<endl<<endl;
    }
    return 0;
}
