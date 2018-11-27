#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#define X 110
using namespace std;

int arr[X][X];
int brr[X];

int main()
{
    int n,m,i,j,k,now,maxi,temp;
    while(1)
    {
        memset(arr,0,sizeof arr);
        cin>>n>>m;
        if(n==0 and m==0) break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>temp;
                if(temp==0) arr[i][j]=1;
                else arr[i][j]=0;
            }
        }
        maxi=0;
        for(i=0;i<n;i++)
        {
            memset(brr,0,sizeof brr);
            for(j=i;j<n;j++)
            {
                now=0;
                for(k=0;k<m;k++)
                {
                    brr[k]+=arr[j][k];
                    if(brr[k]==(j-(i-1)))
                    {
                        now+=brr[k];
                        maxi=max(maxi,now);
                    }
                    else now=0;
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
