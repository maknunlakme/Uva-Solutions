#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int parent[1100000];

int find_union(int x)
{
    if(x==parent[x]) return x;
    else return parent[x]=find_union(parent[x]);
}

int main()
{
    int test,counter,a,b,u,v,n,i,question;
    string line;
    char c;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cin.get();
        counter=0;
        question=0;
        for(i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        while(getline(cin,line))
        {
            if(line.empty())
            {
                break;
            }
            stringstream ss(line);
            ss>>c>>u>>v;
            a=find_union(u);
            b=find_union(v);
            if(c=='c')
            {
                if(a!=b) parent[a]=b;
            }
            else
            {
                question++;
                if(a==b) counter++;
            }
        }
        cout<<counter<<","<<question-counter<<endl;
        if(test!=0) cout<<endl;
    }
    return 0;
}
