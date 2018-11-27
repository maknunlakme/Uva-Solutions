#include<iostream>
#include<queue>
#define X 60
using namespace std;

int fx[]= {+0,+0,+1,-1,+1,+1,-1,-1};
int fy[]= {+1,-1,+0,+0,+1,-1,+1,-1};

string mat[X];

int bfs(int row,int column,int a,int b)
{
    cout<<"BFs"<<endl;
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,j,x,y,r,s,counter=-1;;
    q.push(make_pair(a,b));
    mat[a][b]='.';
    for(i=0; i<8; i++)
    {
        x=a+fx[i];
        y=b+fy[i];
        if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]=='*')
        {
            counter=1;
            mat[x][y]='.';
        }
    }
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<4; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]=='X')
            {
                for(j=0; j<8; j++)
                {
                    r=x+fx[j];
                    s=y+fy[j];
                    if(r>=0&&r<row&&s>=0&&s<column&&mat[r][s]=='*')
                    {
                        counter=1;
                        mat[r][s]='.';
                    }
                }
                q.push(make_pair(x,y));
                mat[x][y]='.';
            }
        }
    }
    return counter;
}

int main()
{
    int row,column,i,j,answer,counter=0,temp;
    bool first;
    queue<int>print;
    while(1)
    {
        cin>>column>>row;
        first=false;
        counter++;
        if(row==0&&column==0)
        {
            break;
        }
        for(i=0; i<row; i++)
        {
            cin>>mat[i];
            //cout<<"Mat "<<mat[i]<<" "<<i<<endl;
        }
        cout<<"Throw "<<counter<<endl;
        answer=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(mat[i][j]=='X')
                {
                    cout<<i<<" "<<j<<" "<<mat[i][j]<<endl;
                    temp=bfs(row,column,i,j);
                    if(temp==-1)
                    {
                        print.push(max(answer,1));
                        counter=0;
                    }
                    else if(temp==1)
                    {
                        cout<<"Plus plus"<<endl;
                        answer++;
                    }
                }
            }
        }
        cout<<print.front();
        print.pop();
        while(!print.empty())
        {
            cout<<" "<<print.front();
            print.pop();
        }
        cout<<endl;
    }
    return 0;
}
