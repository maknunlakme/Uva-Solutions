#include<iostream>
#include<sstream>
#define X 1000
using namespace std;

int parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}




int main()
{
    int test;
    string line;
    cin>>test;
    while(test--)
    {
        while(1)
        {
            getline(cin,line);
            if(line.empty()) break;

            stringstream ss(line);
            ss>>a>>b;
            mat[a][b]=1;
        }
        for(i=1;i<=n;i++)
        {
            parent[i]=i;
        }

    }
    return 0;
}
