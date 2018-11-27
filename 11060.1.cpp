#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#define X 110
using namespace std;

map<string,int>mark;
map<int,string>unmark;
int discovery[X],finish[X],color[X];
vector<int>mat[X];
vector<pair<int,int> >topsort;
int ttime;
int white=0;
int grey=1;
int black=2;

void dfs(int u)
{
    int length,i,v;
    ttime++;
    discovery[u]=ttime;
    color[u]=grey;
    length=mat[u].size();
    for(i=0; i<length; i++)
    {
        v=mat[u][i];
        if(color[v]==white) dfs(v);
    }
    color[u]=black;
    ttime++;
    finish[u]=ttime;
    return;
}


int main()
{
    int n,m,i,counter,case_count=0;
    string a,b;
    while(cin>>n)
    {
        case_count++;
        memset(color,0,sizeof color);
        memset(discovery,0,sizeof discovery);
        memset(finish,0,sizeof finish);
        for(i=0;i<=n;i++) mat[i].clear();
        topsort.clear();
        mark.clear();
        ttime=0;
        counter=1;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(!mark[a])
            {
                unmark[counter]=a;
                mark[a]=counter++;
            }
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            mat[mark[a]].push_back(mark[b]);
        }
        for(i=1;i<=n;i++)
        {
            if(color[i]==white) dfs(i);
        }
        for(i=1; i<=n; i++)
        {
            topsort.push_back(make_pair(finish[i],i));
        }
        sort(topsort.begin(),topsort.end(),greater<pair<int,int > >());
        cout<<"Case #"<<case_count<<": Dilbert should drink beverages in this order:";
        for(i=0; i<n; i++)
        {
            cout<<" "<<unmark[topsort[i].second];
        }
        cout<<endl<<endl;
        for(i=0;i<n;i++)
        {
            cout<<i<<" "<<topsort[i].first<<" "<<topsort[i].second<<endl;
        }
    }
    return 0;
}
