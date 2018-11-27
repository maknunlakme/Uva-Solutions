#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<cstring>
#include<queue>
#define X 110
using namespace std;

map<string,int>mark;
map<int,string>unmark;
int indegree[X];
vector<int>mat[X],answer;

struct compare
{
    bool operator()(const int &a,const int &b)
    {
        return a>b;
    }
};


int main()
{
    int n,m,i,counter,u,v,length,case_count=0;
    string a,b;
    while(cin>>n)
    {
        case_count++;
        counter=1;
        memset(indegree,0,sizeof indegree);
        mark.clear();
        unmark.clear();
        answer.clear();
        for(i=0;i<=n;i++) mat[i].clear();
        for(i=0;i<n;i++)
        {
            cin>>a;
            unmark[counter]=a;
            mark[a]=counter++;
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            mat[mark[a]].push_back(mark[b]);
            indegree[mark[b]]++;
        }

        priority_queue<int,vector<int>,compare>q;

        for(i=1;i<=n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }

        while(!q.empty())
        {
            u=q.top();
            q.pop();
            answer.push_back(u);
            length=mat[u].size();
            for(i=0;i<length;i++)
            {
                v=mat[u][i];
                indegree[v]--;
                if(indegree[v]==0)
                {
                    q.push(v);
                }
            }
        }
        cout<<"Case #"<<case_count<<": Dilbert should drink beverages in this order:";
        for(i=0; i<n; i++)
        {
            cout<<" "<<unmark[answer[i]];
        }
        cout<<"."<<endl<<endl;
    }
    return 0;
}
