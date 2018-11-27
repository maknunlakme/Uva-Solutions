#include<cstdlib>
#include<sstream>
#include<string>
#include<iostream>
#include<stack>
#include<queue>
#define X 1000
using namespace std;

struct nodes
{
    int color;
    int dis;
    int parent;
};
queue<int> Q;
void BFS(int node,int start,int ends,vector<int>mat[])
{
    struct nodes G[X];
    stack<int>answer;
    int i,u,v,length,temp;
    for(i=1; i<=node; i++)
    {
        G[i].color=0;
        G[i].dis=0;
        G[i].parent=-1;
    }
    G[start].color=1;
    G[start].dis=0;
    G[start].parent=-1;
    Q.push(start);
    while(!Q.empty())
    {
        u=Q.front();
        //cout<<"u  "<<u<<endl;
        Q.pop();
        length=mat[u].size();
        for(i=0; i<length; i++)
        {
            v=mat[u][i];
            if(G[v].color==0)
            {
                G[v].color=1;
                G[v].dis=G[u].dis+1;
                G[v].parent=u;
                Q.push(v);
            }
        }
        G[u].color=2;
    }
    temp=ends;
    if(G[ends].parent>0)
    {
        while(G[ends].parent>0)
        {
            answer.push(G[ends].parent);
            // cout<<"ams "<<answer.top()<<endl;
            ends=G[ends].parent;
        }
        cout<<answer.top();
        answer.pop();
        while(!answer.empty())
        {
            cout<<" "<<answer.top();
            answer.pop();
        }
        cout<<" "<<temp<<endl;
    }
    else
    {
        cout<<"connection impossible"<<endl;
    }
    return;
}

int main()
{
    int source,node,i,j,hyphen,nodeposition,a,b;
    string line,temp;
    while(cin>>node)
    {
        vector<int>mat[X];
        for(i=1; i<=node; i++)
        {
            cin>>line;
            hyphen=line.find("-");
            nodeposition=atoi(line.substr(0,hyphen).c_str());
            stringstream ss(line.substr(hyphen+1));
            while(getline(ss,temp,','))
            {
                mat[nodeposition].push_back(atoi(temp.c_str()));
                //cout<<nodeposition<<" bling "<<atoi(temp.c_str())<<endl;
            }
        }
        cin>>source;
        cout<<"-----"<<endl;
        while(source--)
        {
            cin>>a>>b;
            BFS(node,a,b,mat);
        }
    }
    return 0;
}
