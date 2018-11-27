#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<string>
#include<cstring>
#define X 10000
using namespace std;

map<char,int> mark;
int bfs(int node,vector<int>mat[X])
{
    char visited[X];
    memset(visited,0,sizeof visited);
    queue<int>bfsq;
    int u,v,length,i,counter=0;
    for(i=1; i<=node; i++)
    {
        //cout<<i<<" "<<"vis "<<visited[i]<<endl;
        if(!visited[i])
        {
            bfsq.push(i);
            visited[i]=1;
           // cout<<"pushing "<<i<<" "<<node<<endl;
            while(!bfsq.empty())
            {
                u=bfsq.front();
                bfsq.pop();
                length=mat[u].size();
                for(i=0; i<length; i++)
                {
                    v=mat[u][i];
                    if(!visited[v])
                    {
                        visited[v]=1;
                        //cout<<"marking "<<v<<endl;
                        bfsq.push(v);
                    }
                }
            }
            counter++;
        }
    }
    return counter;
}

int main()
{
    int test,i,counter,node;
    char temp;
    string line;
    cin>>test;
    while(test--)
    {
        cin>>temp;
        cin.ignore(100,'\n');
        vector<int>mat[X];
        counter=1;
        node=temp-'A';
        while(1)
        {
            getline(cin,line);
            if(line.empty())
            {
                break;
            }
            if(!mark[line[0]])
            {
                mark[line[0]]=counter;
                counter++;
            }
            if(!mark[line[1]])
            {
                mark[line[1]]=counter;
                counter++;
            }
            mat[mark[line[0]]].push_back(mark[line[1]]);
            mat[mark[line[1]]].push_back(mark[line[0]]);
            line.clear();
        }
        cout<<bfs(node+1,mat)<<endl;
        mark.clear();
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
