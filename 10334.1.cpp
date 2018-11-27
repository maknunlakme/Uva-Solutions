#include<iostream>
using namespace std;

int mat[1010][1010];

void bigfibo()
{
    int i,j;
    mat[0][0]=1;
    mat[1][0]=1;
    for(i=2;i<=1001;i++)
    {
        for(j=0;j<=1001;j++)
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
        i=1001;
        while(mat[n+1][i]==0)
        {
            i--;
        }
        for(;i>=0;i--)
        {
            cout<<mat[n+1][i];
        }
        cout<<endl;
    }
    return 0;
}
