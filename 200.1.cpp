#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define X 30
using namespace std;

vector<int>mat[X];
vector<string>blah;
vector<int>ans;
int arr[X];
bool brr[X];
int mark[X][X];

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    int i,j,u,v,a,b;
    char ch;
    string line;
    while(cin>>line)
    {
        blah.clear();
        memset(mat,0,sizeof mat);
        memset(mark,0,sizeof mark);
        memset(brr,0,sizeof brr);
        memset(arr,0,sizeof arr);
        blah.push_back(line);
        while(1)
        {
            cin>>line;
            if(line=="#")
                break;
            blah.push_back(line);
        }
        for(i=1; i<blah.size(); i++)
        {
            for(j=0; j<blah[i-1].size() and j<blah[i].size(); j++)
            {
                if(blah[i-1][j]!=blah[i][j])
                {
                    //cerr<<"AA "<<blah[i-1][j]<<" "<<blah[i][j]<<endl;
                    a=blah[i-1][j]-'A';
                    b=blah[i][j]-'A';
                    if(!mark[a][b])
                    {
                        //cerr<<"EEE "<<endl;
                        mark[a][b]=1;
                        mat[a].push_back(b);
                        arr[b]++;
                        brr[a]=brr[b]=1;
                    }
                    break;
                }

            }
        }
        queue<int>q;
        for(i=0; i<26; i++)
        {
            if(brr[i]==1 and arr[i]==0)
            {
                q.push(i);
                ans.push_back(i);
            }
        }
        while(!q.empty())
        {
            u=q.front();
            q.pop();
            for(i=0; i<mat[u].size(); i++)
            {
                v=mat[u][i];
                arr[v]--;
                //cerr<<"AA "<<u<<" "<<v<<" "<<arr[v]<<endl;
                if(arr[v]==0)
                {
                    q.push(v);
                    ans.push_back(v);
                }
            }
        }
        if(ans.empty())
        {
            ans.push_back(blah[0][0]-'A');
        }
        for(i=0; i<ans.size(); i++)
        {
            ch=ans[i]+'A';
            cout<<ch;
        }
        cout<<endl;
        ans.clear();
    }
    return 0;
}
