#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<cstring>
#define X 40
using namespace std;

map<string,int>mark;
int mat[X][X];

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    string a,b;
    int test,i,j,k,l,n,m,p,c,check,answer;
    cin>>test;
    cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;
    for(l=0;l<test;l++)
    {
        cin>>n>>m>>p;
        memset(mat,62,sizeof mat);
        check=mat[1][1];
        for(i=0;i<n;i++)
        {
            cin>>a;
            mark[a]=i;
        }
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            mat[mark[a]][mark[b]]=1;
            mat[mark[b]][mark[a]]=1;
        }

        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
        cout<<"DATA SET  "<<l+1<<endl<<endl;
        for(i=0;i<p;i++)
        {
            cin>>c>>a>>b;
            answer=mat[mark[a]][mark[b]];
            if(answer==check)
            {
                cout<<"NO SHIPMENT POSSIBLE"<<endl;
            }
            else
            {
                cout<<"$"<<answer*c*100<<endl;
            }
        }
        cout<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
