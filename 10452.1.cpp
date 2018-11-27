#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

char mat[10][10];
string line;
int fx[]={-1,0,0};
int fy[]={0,+1,-1};
map<int,string>mark;
int n,m;

void rec(int i,int j,int pos,vector<int>arr)
{
    cerr<<"RR "<<i<<" "<<j<<" "<<pos<<endl;
    int k,x,y;
    if(mat[i][j]=='#')
    {
        cout<<mark[arr[0]];
        for(k=1; k<arr.size(); k++)
        {
            cout<<" "<<mark[arr[k]];
        }
        cout<<endl;
        return;
    }
    for(k=0; k<3; k++)
    {
        x=i+fx[k];
        y=j+fy[k];
        if(x>=0 and x<n and y>=0 and y<m and line[pos]==mat[x][y])
        {
            arr.push_back(k);
            rec(x,y,pos+1,arr);
            arr.pop_back();
        }
    }
}

int main()
{
    line="IEHOVA#";
    mark[0]="forth";
    mark[1]="right";
    mark[2]="left";
    int test,i,j,x,y;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        vector<int>a;
        rec(x,y,0,a);
    }
    return 0;
}
