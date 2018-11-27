#include<iostream>
#include<queue>
#include<string>
#define X 90
using namespace std;

int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

void bfs(int ilength,string mat[X],int i,int j)
{
    queue<pair<int,int> >Q;
    pair<int,int> u;
    int x,y,jlength;
    Q.push(make_pair(i,j));
    //cout<<"working"<<endl;
    while(!Q.empty())
    {
        //cout<<"working bling"<<endl;
        u=Q.front();
        Q.pop();
        for(i=0;i<8;i++)
        {
            //cout<<"bla"<<endl;
            x=u.first+fx[i];
            y=u.second+fy[i];
            jlength=mat[x].size();
            if(x>=0&&x<ilength&&y>=0&&y<jlength&&mat[x][y]==' ')
            {
                mat[x][y]='#';
                Q.push(make_pair(x,y));
            }
        }
    }
}
int main()
{
    int test,ilength,i,jlength,j;
    cin>>test;
    cin.ignore(100,'\n');
    while(test--)
    {
        string mat[X];
        ilength=0;
        while(1)
        {
            getline(cin,mat[ilength]);
            if(mat[ilength][0]=='_')
            {
                break;
            }
            ilength++;
        }
        //cout<<"breaking"<<endl;
        for(i=0;i<ilength;i++)
        {
            jlength=mat[i].size();
            for(j=0;j<jlength;j++)
            {
                if(mat[i][j]=='*')
                {
                    mat[i][j]='#';
                 // cout<<"bfs"<<endl;
                    bfs(ilength,mat,i,j);
                }
            }
        }
        for(i=0;i<ilength+1;i++)
        {
            cout<<mat[i]<<endl;
        }
    }
    return 0;
}
