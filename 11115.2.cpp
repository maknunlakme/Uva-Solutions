#include<iostream>
#include<cstdio>
#define X 50
using namespace std;

int mat[X][X];

void power(int a,int b)
{
    int i,j;
    mat[0][0]=1;
    for(i=1;i<=b;i++)
    {
        for(j=0;j<X;j++)
        {
            mat[i][j]=mat[i-1][j]*a;
        }
        for(j=0;j<X;j++)
        {
            if(mat[i][j]>=10)
            {
                mat[i][j+1]+=mat[i][j]/10;
                mat[i][j]%=10;
            }
        }
    }
    for(i=X-1;mat[b][i]==0;i--);
    for(;i>=0;i--)
    {
        cout<<mat[b][i];
    }
    cout<<endl;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        power(a,b);
    }
    return 0;
}
