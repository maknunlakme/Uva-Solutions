#include<iostream>
using namespace std;

int r1[20],r2[40],r3[40];
char mat[20][20];
int n,counter;

void rec(int y)
{
    if(y==n)
    {
        counter++;
        return;
    }
    for(int x=0;x<n;x++)
    {
        if(r1[x]==1 or r2[x+y]==1 or r3[x-y+n-1]==1 or mat[x][y]=='*') continue;
        r1[x]=r2[x+y]=r3[x-y+n-1]=1;
        rec(y+1);
        r1[x]=r2[x+y]=r3[x-y+n-1]=0;
    }
}


int main()
{
    int t=0,i,j;
    while(1)
    {
        cin>>n;
        t++;
        counter=0;
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }
        rec(0);
        cout<<"Case "<<t<<": "<<counter<<endl;
    }
    return 0;
}
