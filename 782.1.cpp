#include<iostream>
#include<cstdio>
#include<queue>
#include<string>
#include<sstream>
#include<iomanip>
#define X 110
using namespace std;

int fx[]= {+0,+0,+1,-1,+1,+1,-1,-1};
int fy[]= {+1,-1,+0,+0,+1,-1,+1,-1};

int answer[X][X];

void bfs(int row,int column,int a,int b,string mat[],int counter,char check)
{
    queue<pair<int,int> >q;
    pair<int,int> u;
    int i,x,y;
    q.push(make_pair(a,b));
    answer[a][b]=counter;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<8; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]==check)
            {
                mat[x][y]='.';
                answer[x][y]=counter;
                q.push(make_pair(x,y));
            }
        }
    }
}

int main()
{
    int test,i,loop,stari,starj;
    cin>>test;
    cin.get();
    while(test--)
    {
        string mat[X];
        for(i=0;getline(cin,line);i++)
        {
            mat[i]=line;
        }
        loop=i;
        for(i=0;i<loop;i++)
        {
            length=mat[i].length();
            for(j=0;j<length;j++)
            {
                if(mat[i][j]=='*')
                {
                    stari=i;
                    starj=j;
                }
            }
        }
    }
    return 0;
}




int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,row,column,counter,i,j,k,maxi;
    int counts[X];
    char temp;
    string line;
    while(getline(cin,line))
    {
        vector<char>mat[X];
        row=0;
        //cout<<line<<endl;
        if(line=="%"||line.empty())
        {
            break;
        }
        stringstream ss(line);
        while(ss>>temp)
        {
            mat[row].push_back(temp);
        }
        row++;
        while(getline(cin,line))
        {
            //cout<<line<<endl;
            if(line=="%"||line.empty())
            {
                break;
            }
            stringstream ss(line);
            while(ss>>temp)
            {
                mat[row].push_back(temp);
            }
            row++;
        }
        column=mat[0].size();
        counter=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(mat[i][j]!='.')
                {
                    counter++;
                    bfs(row,column,i,j,mat,counter,mat[i][j]);
                }
            }
        }
        for(j=0;j<column;j++)
        {
            maxi=0;
            for(i=0;i<row;i++)
            {
                if(answer[i][j]>maxi)
                {
                    maxi=answer[i][j];
                }
            }
            counts[j]=0;
            while(maxi>0)
            {
                maxi/=10;
                counts[j]++;
            }
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(j>0)
                {
                    cout<<" ";
                }
                cout<<setw(counts[j])<<answer[i][j];
            }
            cout<<endl;
        }
        cout<<"%"<<endl;
    }
    return 0;
}
