#include<iostream>
using namespace std;

int n,m;
int arr[25],brr[25],crr[25];
int maxi;

void rec(int i,int ans)
{
    if(i==m)
    {
        if(ans<=n)
        {
            if(maxi<ans)
            {
                maxi=ans;
                for(int j=0;j<m;j++)
                {
                    crr[j]=brr[j];
                }
            }
        }
        return;
    }
    else
    {
        brr[i]=1;
        rec(i+1,ans+arr[i]);
        brr[i]=0;
        rec(i+1,ans);
    }
}

int main()
{
    int i;
    while(cin>>n)
    {
        maxi=0;
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>arr[i];
        }
        rec(0,0);
        for(i=0;i<m;i++)
        {
            if(crr[i]==1) cout<<arr[i]<<" ";
        }
        cout<<"sum:"<<maxi<<endl;
    }
    return 0;
}
