#include<iostream>
#include<cstring>
#include<set>
using namespace std;

set<long long>mark;
set<long long>::iterator it;
set<long long>::reverse_iterator rit;
long long arr[1000005];

int main()
{
    long long n,m,a,b,i,j,ans,temp;
    while(1)
    {
        cin>>n;
        ans=0;
        memset(arr,0,sizeof arr);
        mark.clear();
        if(n==0) break;
        for(i=0;i<n;i++)
        {

            cin>>m;
            for(j=0;j<m;j++)
            {
                cin>>temp;
                mark.insert(temp);
                arr[temp]++;
            }
            it=mark.begin();
            a=(*it);
            arr[a]--;
            if(arr[a]==0)
            {
                mark.erase(a);
            }
            rit=mark.rbegin();
            b=(*rit);
            arr[b]--;
            if(arr[b]==0)
            {
                mark.erase(b);
            }
            ans+=b-a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
