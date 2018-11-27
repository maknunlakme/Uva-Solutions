#include<iostream>
#include<queue>
#include<string>
#include<cstdio>
#define X 30
using namespace std;

int fx[]={+0,+0,+1,-1,+1,+1,-1,-1};
int fy[]={+1,-1,+0,+0,+1,-1,+1,-1};

int bfs(int ilength,int jlength,int a,int b,string mat[])
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    q.push(make_pair(a,b));
    mat[a][b]=0;
    int counter=1,i,x,y;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<8;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<ilength&&y>=0&&y<jlength&&mat[x][y]=='1')
            {
                counter++;
                mat[x][y]=1;
                q.push(make_pair(x,y));
            }
        }
    }
    return counter;
}


int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,maxi,temp,ilength,jlength,i,j;
    cin>>test;
    cin.get();
    cin.ignore(100,'\n');
    while(test--)
    {
        string mat[X];
        ilength=0;
        while(getline(cin,mat[ilength]))
        {
            if(mat[ilength].empty())
            {
                break;
            }
            ilength++;
        }
        jlength=mat[0].size();
        maxi=0;
        for(i=0;i<ilength;i++)
        {
            for(j=0;j<jlength;j++)
            {
                if(mat[i][j]=='1')
                {
                    temp=bfs(ilength,jlength,i,j,mat);
                    if(maxi<temp)
                    {
                        maxi=temp;
                    }
                }
            }
        }
        cout<<maxi<<endl;
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
