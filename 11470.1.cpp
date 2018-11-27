#include<iostream>
#include<cmath>
#include<cstdio>
#define X 20
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    long long int grid,i,j,n,total,a,b,counter=0;
    while(1)
    {
        cin>>grid;
        counter++;
        int mat[X][X];
        if(grid==0)
        {
            break;
        }
        for(i=0; i<grid; i++)
        {
            for(j=0; j<grid; j++)
            {
                cin>>mat[i][j];
            }
        }
        //cout<<"bling "<<endl;
        a=0;
        b=grid-1;
        cout<<"Case "<<counter<<":";
        while(a<b)
        {
            total=0;
            for(j=a; j<=b; j++)
            {
                total+=mat[a][j]+mat[b][j];
                //cout<<mat[a][j]<<" "<<mat[b][j]<<endl;
            }
            a++;
            b--;
            //cout<<"a "<<a<<" b "<<b<<endl;
            for(j=a; j<=b; j++)
            {
                total+=mat[j][a-1]+mat[j][b+1];
                //cout<<mat[j][a-1]<<" "<<mat[j][b+1]<<endl;
            }
            cout<<" "<<total;
        }
        if(a==b)
        {
            cout<<" "<<mat[a][b];
        }
        cout<<endl;
    }
    return 0;
}
