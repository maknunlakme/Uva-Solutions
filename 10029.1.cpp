#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<queue>
#include<vector>
#include<sstream>
#define X 25100
using namespace std;

queue<int>bfsq;
vector<string>words;
map<string,int>node;
vector<int>adjlist[X];
string word,a,b,line;
char visited[X];
int distances[X];
int word_count,u,v,q;
void clearing(queue<int> &q)
{
    queue<int> emp;
    swap(q,emp);
}
int matchingstring(string a,string b)
{
    int lengtha=a.length();
    int lengthb=b.length();
    int i,counter=0;
    if(lengtha<lengthb)
    {
        for(i=0; i<lengtha; i++)
        {
            if(a[i]!=b[i])
            {
                counter++;
            }
        }
        counter+=lengthb-i;
    }
    else
    {
        for(i=0; i<lengthb; i++)
        {
            if(a[i]!=b[i])
            {
                counter++;
            }
        }
        counter+=lengtha-i;
    }
    return counter;
}

int bfs(int p)
{

    int temp,length,i,answer=0;
    memset(visited,0,sizeof visited);
    memset(distances,0,sizeof distances);
    answer=0;
    temp=p;
    visited[temp]=1;
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
                if(answer<distances[v])
                {
                    answer=distances[v];
                    q=v;
                }
                bfsq.push(v);
            }
        }
    }
    cerr<<"A "<<answer<<" "<<q<<endl;
    return answer;
}
int main()
{
    int i,j,answer=0;
    word_count=1;
    words.push_back("0");
    while(cin>>word)
    {
        //cerr<<"W "<<word<<endl;
        node[word]=word_count;
        for(i=1; i<word_count; i++)
        {
            if(matchingstring(words[i],word)==1)
            {
                //cerr<<"WW "<<word<<" "<<words[i]<<endl;
                adjlist[node[word]].push_back(node[words[i]]);
                adjlist[node[words[i]]].push_back(node[word]);
            }
        }
        word_count++;
        words.push_back(word);
    }
    //cin.ignore(100,'\n');
    for(i=1;i<=word_count;i++)
    {
        //cerr<<"I "<<i<<endl;
        answer=max(answer,bfs(i));
    }
    cout<<answer<<endl;
    return 0;
}
