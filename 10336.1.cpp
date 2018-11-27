#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#define X 10000
using namespace std;

bool comparison(const pair<int,char>&left,const pair<int,char>&right)
{
    if(left.first==right.first)
    {
        return left.second<right.second;
    }
    else
    {
        return left.first>right.first;
    }
}

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

map<char,int>counter;
map<char,int>::iterator it;
vector<pair<int,char> >mark;
void bfs(int row,int column,int i,int j,string mat[],char source )
{
    queue<pair<int,int> >Q;
    pair<int,int> u;
    int x,y;
    Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(i=0;i<4;i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]==source)
            {
                mat[x][y]='*';
                Q.push(make_pair(x,y));
            }
        }
    }
}

int main()
{
    int test,row,column,i,j,k,length;
    char temp;
    cin>>test;
    for(i=0;i<test;i++)
    {
        string mat[X];
        cin>>row>>column;
        for(j=0;j<row;j++)
        {
            cin>>mat[j];
        }
        for(j=0;j<row;j++)
        {
            for(k=0;k<column;k++)
            {
                temp=mat[j][k];
                if(temp!='*')
                {
                    //cout<<mat[j][k]<<endl;
                    bfs(row,column,j,k,mat,temp);
                    //cout<<"blah"<<endl;
                    if(!counter[temp])
                    {
                        counter[temp]=1;
                    }
                    else
                    {
                        counter[temp]++;
                    }
                }
            }
        }
        for(it=counter.begin();it!=counter.end();it++)
        {
            mark.push_back(make_pair(it->second,it->first));
        }
        length=mark.size();
        sort(mark.begin(),mark.end(),comparison);
        cout<<"World #"<<i+1<<endl;
        for(j=0;j<length;j++)
        {
            cout<<mark[j].second<<": "<<mark[j].first<<endl;
        }
        counter.clear();
        mark.clear();
    }
    return 0;
}
