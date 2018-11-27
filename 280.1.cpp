#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
#define X 110
using namespace std;

queue<int>bfsq;
void clearing(queue<int> &q)
{
    queue<int> emp;
    swap(q,emp);
}

int main()
{
    int node,index,vertex,query,connected,u,v,length,i,head;
    while(1)
    {
        cin>>node;
        vector<int>adjlist[X];
        if(node==0)
        {
            break;
        }
        while(1)
        {
            cin>>index;
            if(index==0)
            {
                break;
            }
            while(1)
            {
                cin>>vertex;
                if(vertex==0)
                {
                    break;
                }
                adjlist[index].push_back(vertex);
            }
        }
        cin>>query;
        while(query--)
        {
            cin>>head;
            char visited[X];
            connected=node;
            memset(visited,0,sizeof visited);
            if(adjlist[head].size()!=0)
            {
               bfsq.push(head);
               while(!bfsq.empty())
               {
                   u=bfsq.front();
                   bfsq.pop();
                   length=adjlist[u].size();
                   for(i=0;i<length;i++)
                   {
                       v=adjlist[u][i];
                       if(!visited[v])
                       {
                           visited[v]=1;
                           connected--;
                           bfsq.push(v);
                       }
                   }
               }
            }
            cout<<connected;
            for(i=1;i<=node;i++)
            {
                if(visited[i]==0)
                {
                    cout<<" "<<i;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
