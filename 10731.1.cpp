#include<iostream>
#include<vector>
#include<stack>
#include<cstring>
#include<algorithm>
#include<map>
#define X 1000
using namespace std;

string arr[X],a;
vector<int>mat[X],rmat[X],scc[X];
vector<string>print;
map<string,int>mark;
map<int,char>unmark;
bool visit[X];
int counter;
stack<int>st;

void mark_it(string line)
{
    if(!mark[line])
    {
        mark[line]=counter;
        unmark[counter]=line[0];
        counter++;
    }
}


void dfs1(int u)
{
    visit[u]=1;
    int i,v;
    for(i=0;i<mat[u].size();i++)
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
    //cerr<<"DDD "<<marker<<" "<<u<<" "<<unmark[u]<<endl;
    scc[marker].push_back(u);
    visit[u]=1;
    int i,v;
    for(i=0;i<rmat[u].size();i++)
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
    int i,marker=0,u;
    memset(visit,0,sizeof visit);
    for(i=1;i<counter;i++)
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


int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int n,i,j,marker,blah=0;
    string line,newline;
    while(1)
    {
        memset(mat,0,sizeof mat);
        memset(rmat,0,sizeof rmat);
        memset(scc,0,sizeof scc);
        print.clear();
        mark.clear();
        unmark.clear();
        cin>>n;
        counter=1;
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>arr[j];
                mark_it(arr[j]);
            }
            cin>>a;
            mark_it(a);
            for(j=0;j<5;j++)
            {
                mat[mark[a]].push_back(mark[arr[j]]);
                rmat[mark[arr[j]]].push_back(mark[a]);
            }
        }
        marker=find_scc();
        //cerr<<"AA "<<marker<<endl;
        for(i=0;i<marker;i++)
        {
            line.clear();
            newline.clear();
            line.push_back(unmark[scc[i][0]]);
            //cerr<<"QQQQ "<<scc[i][0]<<" "<<unmark[scc[i][0]]<<endl;
            for(j=1;j<scc[i].size();j++)
            {
                line.push_back(unmark[scc[i][j]]);
                //cerr<<"QQQQ "<<scc[i][j]<<" "<<unmark[scc[i][j]]<<endl;
            }
            sort(line.begin(),line.end());
            newline.push_back(line[0]);
            for(j=1;j<line.size();j++)
            {
                newline.push_back(' ');
                newline.push_back(line[j]);
            }
            print.push_back(newline);
            //cerr<<"SSSS "<<line<<" "<<newline<<endl;
        }
        if(blah!=0) cout<<endl;
        sort(print.begin(),print.end());
        for(i=0;i<print.size();i++)
        {
            cout<<print[i]<<endl;
        }
        blah++;
    }
    return 0;
}
