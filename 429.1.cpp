#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<queue>
#include<vector>
#include<sstream>
#define X 250
using namespace std;

queue<int>bfsq;
vector<string>words;
map<string,int>node;
void clearing(queue<int> &q)
{
    queue<int> emp;
    swap(q,emp);
}
int matchingstring(string a,string b)
{
    int lengtha=a.length();
    int lengthb=b.length();
    if(lengtha!=lengthb)
    {
        return -1;
    }
    int i,counter=0;
    for(i=0; i<lengtha; i++)
    {
        if(a[i]!=b[i])
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    string word,a,b,line;
    int i,j,test,word_count,u,v,answer;
    cin>>test;
    while(test--)
    {
        word_count=1;
        vector<int>adjlist[X];
        words.push_back("0");
        while(1)
        {
            cin>>word;
            if(word=="*")
            {
                break;
            }
            node[word]=word_count;
            for(i=1; i<word_count; i++)
            {
                if(matchingstring(words[i],word)==1)
                {
                    adjlist[node[word]].push_back(node[words[i]]);
                    adjlist[node[words[i]]].push_back(node[word]);
                }
            }
            word_count++;
            words.push_back(word);
        }
        cin.ignore(100,'\n');
        while(1)
        {
            getline(cin,line);
            if(line.empty())
            {
                break;
            }
            stringstream ss(line);
            ss>>a>>b;
            if(matchingstring(a,b)==-1)
            {
                cout<<a<<" "<<b<<" "<<-1<<endl;
            }
            else if(a==b)
            {
                cout<<a<<" "<<b<<" "<<0<<endl;
            }
            else
            {
                char visited[X];
                int distances[X];
                int temp,length;
                memset(visited,0,sizeof visited);
                memset(distances,0,sizeof distances);
                answer=0;
                if(node[a])
                {
                    temp=node[a];
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
                                if(node[b]==v)
                                {
                                    answer=distances[v];
                                    break;
                                }
                                bfsq.push(v);
                            }
                        }
                    }
                }
                cout<<a<<" "<<b<<" "<<answer<<endl;
                line.clear();
            }
        }
        node.clear();
        words.clear();
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
