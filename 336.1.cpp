#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#define X 10000
using namespace std;

queue<int>bfsq;
map<int,int>node;
void clearing(queue<int> &q)
{
    queue<int> emp;
    swap(q,emp);
}
int main()
{
    int i,j,a,b,u,v,length,visit_counter,vertex,case_counter=0,node_counter;
    for(j=0;; j++)
    {
        cin>>vertex;
        node_counter=1;
        vector<int>adjlist[X];
        if(vertex==0)
        {
            break;
        }
        for(i=0; i<vertex; i++)
        {
            cin>>a>>b;
            if(!node[a])
            {
                node[a]=node_counter;
                node_counter++;
            }
            if(!node[b])
            {
                node[b]=node_counter;
                node_counter++;
            }
            adjlist[node[a]].push_back(node[b]);
            adjlist[node[b]].push_back(node[a]);
        }
        while(1)
        {
            char visited[X];
            int distances[X];
            int temp;
            memset(visited,0,sizeof visited);
            memset(distances,-1,sizeof distances);
            cin>>a>>b;
            visit_counter=0;
            if(a==0&&b==0)
            {
                break;
            }
            case_counter++;
            if(node[a])
            {
                temp=node[a];
                visited[temp]=1;
                visit_counter++;
                distances[temp]=0;
                bfsq.push(temp);
                while(!bfsq.empty())
                {
                    u=bfsq.front();
                    bfsq.pop();
                    length=adjlist[u].size();
                    for(i=0; i<length; i++)
                    {
                        v=adjlist[u][i];
                        if(!visited[v])
                        {
                            visited[v]=1;
                            distances[v]=distances[u]+1;
                            //cout<<"DIS "<<v<<" "<<distances[v]<<endl;
                            if(distances[v]>b)
                            {
                                clearing(bfsq);
                                break;
                            }
                            visit_counter++;
                            bfsq.push(v);
                        }
                    }
                }
                cout<<"Case "<<case_counter<<": "<<(node_counter-1)-visit_counter<<" "<<"nodes not reachable from node "<<a<<" with TTL = "<<b<<"."<<endl;
            }
            else
            {
                cout<<"Case "<<case_counter<<": "<<(node_counter-1)<<" "<<"nodes not reachable from node "<<a<<" with TTL = "<<b<<"."<<endl;
            }
        }
        node.clear();
    }
    return 0;
}
