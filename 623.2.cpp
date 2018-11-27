#include<iostream>
#include<cstdio>
#define X 2600
using namespace std;

int mat[1010][X];

void power(int n)
{
    int i,j,k,total;
    mat[0][0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<X;j++)
        {
            mat[i][j]=mat[i-1][j]*i;
        }
        for(j=0;j<X;j++)
        {
            if(mat[i][j]>=10)
            {
                mat[i][j+1]+=mat[i][j]/10;
                mat[i][j]%=10;
            }
            //cout<<mat[i][j]<<" ";
        }
        //cout<<endl;
        //cout<<endl;
    }
    for(i=X-1;mat[n][i]==0;i--);
    for(;i>=0;i--)
    {
        cout<<mat[n][i];
    }
    cout<<endl;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        cout<<n<<"!"<<endl;
        power(n);
    }
    return 0;
}
