#include<iostream>
#include<climits>
#include<cstdio>
#include<vector>
#include<algorithm>
#define X 1010
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int row,column,i,j,test,a,b,temp;
    cin>>test;
    while(test--)
    {
        cin>>row>>column;
        vector<int>mat[X];
        vector<long long int>dis[X];
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                dis[i].push_back(INT_MAX);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cin>>temp;
                mat[i].push_back(temp);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                a=INT_MAX;
                b=INT_MAX;
                if(i-1>=0)
                {
                    a=dis[i-1][j];
                }
                if(j-1>=0)
                {
                    b=dis[i][j-1];
                }
                if(a==INT_MAX&&b==INT_MAX)
                {
                    dis[i][j]=mat[i][j];
                }
                else if(a==INT_MAX)
                {
                    dis[i][j]=b+mat[i][j];
                }
                else if(b==INT_MAX)
                {
                    dis[i][j]=a+mat[i][j];
                }
                else
                {
                    dis[i][j]=min(a,b)+mat[i][j];
                }
               // cout<<dis[i][j]<<" "<<a<<" "<<b<<" "<<mat[i][j]<<endl;
            }
        }
        cout<<dis[row-1][column-1]<<endl;
    }
    return 0;
}
