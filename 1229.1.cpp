#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<map>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
#define X 110
using namespace std;

int n,counter;
map<string,int>mark;
map<int,string>unmark;
vector<int>mat[X],rmat[X],scc[X];
vector<string>ans;
stack<int>st;
int visit[X];

void mark_it(string a)
{
    counter++;
    mark[a]=counter;
    unmark[counter]=a;
}

void dfs1(int u)
{
    //cerr<<"UU "<<u<<" "<<unmark[u]<<endl;
    visit[u]=1;
    int i,v;
    for(i=0; i<mat[u].size(); i++)
    {
        v=mat[u][i];
        if(!visit[v])
        {
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u,int marker)
{
    //cerr<<"SSS "<<u<<" "<<marker<<" "<<unmark[u]<<endl;
    scc[marker].push_back(u);
    visit[u]=1;
    int i,v;
    for(i=0; i<rmat[u].size(); i++)
    {
        v=rmat[u][i];
        if(!visit[v])
        {
            dfs2(v,marker);
        }
    }
}

int find_scc()
{
    int i,u,marker=0;
    memset(visit,0,sizeof visit);
    for(i=1; i<=counter; i++)
    {
        if(!visit[i])
        {
            dfs1(i);
        }
    }
    memset(visit,0,sizeof visit);
    while(!st.empty())
    {
        u=st.top();
        st.pop();
        if(!visit[u])
        {
            dfs2(u,marker);
            marker++;
        }
    }
    return marker;
}

void dfs3(int u)
{
    visit[u]=1;
    int i,v;
    for(i=0; i<mat[u].size(); i++)
    {
        v=mat[u][i];
        if(!visit[v])
        {
            dfs3(v);
        }
    }
}

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    int i,j,v,marker;
    string line,a,b;
    while(1)
    {
        counter=0;
        memset(mat,0,sizeof mat);
        memset(rmat,0,sizeof rmat);
        memset(scc,0,sizeof scc);
        ans.clear();
        mark.clear();
        unmark.clear();
        cin>>n;
        getchar();
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            getline(cin,line);
            stringstream ss(line);
            ss>>a;
            if(!mark[a])
                mark_it(a);
            while(ss>>b)
            {
                if(!mark[b])
                    mark_it(b);
                mat[mark[a]].push_back(mark[b]);
                rmat[mark[b]].push_back(mark[a]);
            }
        }
        marker=find_scc();
        memset(visit,0,sizeof visit);
        for(i=0; i<marker; i++)
        {
            if(scc[i].size()>1)
            {
                for(j=0; j<scc[i].size(); j++)
                {
                    v=scc[i][j];
                    if(!visit[v])
                    {
                        dfs3(v);
                    }
                }
            }
        }
        for(i=1; i<=counter; i++)
        {
            if(visit[i])
            {
                ans.push_back(unmark[i]);
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        if(ans.size()>0)
        {
            cout<<ans[0];
            for(i=1; i<ans.size(); i++)
            {
                cout<<" "<<ans[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
