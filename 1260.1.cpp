#include<iostream>
#include<cstring>
#define X 1100
using namespace std;

int arr[X],brr[X];

int main()
{
    int test,n,i,j,ans;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ans=0;
        memset(arr,0,sizeof arr);
        memset(brr,0,sizeof brr);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(arr[i]>=arr[j])
                {
                    brr[i]++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            ans+=brr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
