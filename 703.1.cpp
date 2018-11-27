#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int arr[110][110];
vector<pair<int,pair<int,int> > >ans;
bool visit[110][110][110];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int n,i,j,k,counter;
    while(cin>>n)
    {
        ans.clear();
        counter=0;
        memset(visit,0,sizeof visit);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==1 and arr[j][i]==0 and i!=j)
                {
                    for(k=0;k<n;k++)
                    {
                        if(arr[j][k]==1 and arr[k][j]==0 and k!=j)
                        {
                            if(arr[k][i]==1 and arr[i][k]==0 and k!=i)
                            {
                                if((i<j and j<k) or (i>j and j>k))
                                {
                                    if(!visit[i][j][k])
                                    {
                                        counter++;
                                        ans.push_back({i+1,{j+1,k+1}});
                                        visit[i][j][k]=1;
                                        visit[k][j][i]=1;
                                    }
                                }
                            }
                        }
                    }
                }
                else if(arr[i][j]==0 and arr[j][i]==0 and i!=j)
                {
                    for(k=0;k<n;k++)
                    {
                        if(arr[j][k]==0 and arr[k][j]==0 and k!=j)
                        {
                            if(arr[k][i]==0 and arr[i][k]==0 and k!=i)
                            {
                                if((i<j and j<k) or (i>j and j>k))
                                {
                                    if(!visit[i][j][k])
                                    {
                                        counter++;
                                        ans.push_back({i+1,{j+1,k+1}});
                                        visit[i][j][k]=1;
                                        visit[k][j][i]=1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<counter<<endl;
        for(i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
        }
    }
    return 0;
}
