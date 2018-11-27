#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
#define X 300
using namespace std;

double mat[X][X];
vector<pair<double,double> >arr;

double dis(pair<double,double> a,pair<double,double> b)
{
    return sqrt(((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second)));
}

void floyd_warshall(int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                mat[i][j]=min(mat[i][j],max(mat[i][k],mat[k][j]));
            }
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test=0,n,i,j,x,y;
    while(1)
    {
        test++;
        cin>>n;
        if(n==0) break;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                mat[i][j]=100000000;
            }
        }
        arr.clear();
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            arr.push_back({x,y});
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                //cerr<<"RR "<<i<<" "<<j<<" "<<dis(arr[i],arr[j])<<endl;
                mat[i][j]=mat[j][i]=dis(arr[i],arr[j]);
            }
        }
        floyd_warshall(n);
        printf("Scenario #%d\n",test);
        printf("Frog Distance = %.3lf\n\n",mat[0][1]);
    }
    return 0;
}
