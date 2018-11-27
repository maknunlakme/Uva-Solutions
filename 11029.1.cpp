#include<iostream>
#define X
using namespace std;

int bigmod(int n,int k)
{
    if(k==0)
    {
        return 1;
    }
    else if(k%2==0)
    {
        int temp=bigmod(n,k/2)%1000;
        temp*=temp;
        temp%=1000;
        return temp;
    }
    else
    {
        return (n*bigmod(n,k-1))%1000;
    }
}



void big(int n,int k)
{
    int i,j;
    for(i=1;i<=k;i++)
    {
        for(j=0;j<=Y;j++)
        {
            mat[i][j]*=k;
            if(mat[i][j]>=10)
            {
                mat[i][j+1]+=(mat[i][j]/10);
                mat[i][j]%=10;
            }
        }
    }
    while(mat[k][Y])
}


int main()
{
    int test,i,number;
    cin>>test;
    while(test--)
    {
        cin>>number;

    }
    return 0;
}
