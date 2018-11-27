#include<iostream>
#include<cstring>
#define X 1100
using namespace std;

int mat[X+10][X+10];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int d,n,test,maxi,i,j,k,x,y,s;
    cin>>test;
    while(test--)
    {
        cin>>d>>n;
        maxi=0;
        memset(mat,0,sizeof mat);
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>s;
            for(j=max(x-d,0);j<=min(x+d,X);j++)
            {
                for(k=max(y-d,0);k<=min(y+d,X);k++)
                {
                    mat[j][k]+=s;
                }
            }
        }
        for(i=0;i<X;i++)
        {
            for(j=0;j<X;j++)
            {
                if(maxi<mat[i][j])
                {
                    maxi=mat[i][j];
                    x=i;
                    y=j;
                }
            }
        }
        cout<<x<<" "<<y<<" "<<maxi<<endl;
    }
    return 0;
}
