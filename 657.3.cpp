#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#define X 60
using namespace std;

vector<pair<int,int> >arr;
vector<int>answer;
char mat[X][X];
bool visit1[X][X],visit2[X][X];
int n,m,counter;

int fx[]= {0,0,-1,1};
int fy[]= {-1,1,0,0};;

void dfs1(int a,int b)
{
    visit1[a][b]=1;
    int i,x,y;
    for(i=0; i<4; i++)
    {
        x=a+fx[i];
        y=b+fy[i];
        if(x>=0 and x<m and y>=0 and y<n and visit1[x][y]==0 and (mat[x][y]=='*' or mat[x][y]=='X'))
        {
            if(mat[x][y]=='X') arr.push_back(make_pair(x,y));
            dfs1(x,y);
        }
    }
}

void dfs2(int a,int b)
{
    //cerr<<"XXX "<<a<<" "<<b<<endl;
    visit2[a][b]=1;
    int i,x,y;
    for(i=0; i<4; i++)
    {
        x=a+fx[i];
        y=b+fy[i];
        if(x>=0 and x<m and y>=0 and y<n and visit2[x][y]==0 and mat[x][y]=='X')
        {
            //cerr<<"YY "<<x<<" "<<y<<endl;
            dfs2(x,y);
        }
    }
}


int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test=0,i,j,k,x,y,length;
    while(1)
    {
        cin>>n>>m;
        if(n==0 and m==0) break;
        test++;
        memset(mat,0,sizeof mat);
        for(i=0; i<m; i++)
        {
            cin>>mat[i];
        }
        memset(visit1,0,sizeof visit1);
        memset(visit2,0,sizeof visit2);
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(visit1[i][j]==0 and (mat[i][j]=='*' or mat[i][j]=='X'))
                {
                    dfs1(i,j);
                    length=arr.size();
                    counter=0;
                    for(k=0; k<length; k++)
                    {
                        x=arr[k].first;
                        y=arr[k].second;
                        if(visit2[x][y]==0)
                        {
                            dfs2(x,y);
                            counter++;
                        }
                    }
                    //cerr<<"PPP "<<counter<<endl;
                    answer.push_back(counter);
                    arr.clear();
                }
            }
        }
        cout<<"Throw "<<test<<endl;
        length=answer.size();
        sort(answer.begin(),answer.end());
        if(length>0)
        {
            cout<<answer[0];
            for(i=1; i<length; i++)
            {
                cout<<" "<<answer[i];
            }
        }
        cout<<endl<<endl;
        answer.clear();
    }
    return 0;
}
