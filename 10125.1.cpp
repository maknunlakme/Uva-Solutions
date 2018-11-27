#include<iostream>
#include<map>
#include<algorithm>
#include <cstdio>
#include<vector>
using namespace std;

vector<pair<int, pair<int,int> > > mark;
map<int,int>id;
int arr[1100];

int main()
{
    std::ios::sync_with_stdio(false);
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,i,j,ans,temp,a,b;
    while(1)
    {
        cin>>n;
        mark.clear();
        id.clear();
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                mark.push_back({arr[i]+arr[j],{arr[i],arr[j]}});
            }
        }
        for(i=0;i<mark.size();i++) id[mark[i].first]=i;
        sort(arr,arr+n);
        ans=-1;
        for(i=n-1;i>=0;i--)
        {
            for(j=i-1;j>=0;j--)
            {
                temp=arr[i]-arr[j];
                //cerr<<"QQQQ "<<arr[i]<<" "<<arr[j]<<" "<<mark[temp]<<endl;
                if(id[temp])
                {
                    a=mark[id[temp]].second.first;
                    b=mark[id[temp]].second.second;
                    if(arr[i]!=a and arr[i]!=b and arr[j]!=a and arr[j]!=b)
                    {
                        ans=arr[i];
                        i=-1;
                        j=-1;
                        break;
                    }
                }
            }
        }
        if(ans==-1) cout<<"no solution"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
