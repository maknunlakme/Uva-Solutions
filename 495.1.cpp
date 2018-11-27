#include<iostream>
#define X 5010
#define Y 1050
using namespace std;

int mat[X+10][Y+10];

void bigfibo()
{
    int i,j;
    mat[0][0]=0;
    mat[1][0]=1;
    for(i=2;i<=X;i++)
    {
        for(j=0;j<=Y;j++)
        {
            mat[i][j]+=mat[i-1][j]+mat[i-2][j];
            if(mat[i][j]>=10)
            {
                mat[i][j+1]+=(mat[i][j]/10);
                mat[i][j]%=10;
            }
        }
    }
}



int main()
{
    bigfibo();
    int n,i,j;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"The Fibonacci number for 0 is 0"<<endl;
        }
        else
        {i=Y;
        cout<<"The Fibonacci number for "<<n<<" is ";
        while(mat[n][i]==0)
        {
            i--;
        }
        for(;i>=0;i--)
        {
            cout<<mat[n][i];
        }
        cout<<endl;
        }
    }
    return 0;
}
