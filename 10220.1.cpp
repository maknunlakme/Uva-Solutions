#include<iostream>
#include<cstdio>
#define X 2500
using namespace std;

int mat[X][X];

int power(int n)
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
        for(k=0;mat[i][k]==0;k++);
        for(j=0;k<X;j++,k++)
        {
            mat[i][j]=mat[i][k];
        }
        //cout<<endl;
    }
    total=0;
    for(i=0;i<X;i++)
    {
        total+=mat[n][i];
    }
    /*for(j=X-1;mat[n][i]==0;i--);
    for(;i>=0;i--)
    {
        total+=mat[n][i];
    }*/
    return total;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        cout<<power(n)<<endl;
    }
    return 0;
}
