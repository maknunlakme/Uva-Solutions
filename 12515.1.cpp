#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;

vector<string>arr;
string line;

int main()
{
    std::ios::sync_with_stdio(false);
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int m,q,ans,i,j,k,l,maxi,counter;
    cin>>m>>q;
    for(i=0; i<m; i++)
    {
        cin>>line;
        arr.push_back(line);
    }
    for(i=0; i<q; i++)
    {
        cin>>line;
        ans=0;
        maxi=0;
        for(j=0; j<m; j++)
        {
            for(k=0;k+line.size()<=arr[j].size();k++)
            {
                counter=0;
                for(l=0;l<line.size();l++)
                {
                    //cerr<<"AA "<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<arr[j][k]<<" "<<line[l]<<endl;
                    if(arr[j][k+l]==line[l]) counter++;
                }
                if(counter>maxi)
                {
                    maxi=counter;
                    ans=j+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
