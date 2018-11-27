#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[1100];
vector<int>brr;

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,m,i,j,temp,a,ans,counter=0;
    while(1)
    {
        cin>>n;
        counter++;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        brr.clear();
        //brr.push_back(0);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                brr.push_back(arr[i]+arr[j]);
            }
        }
        sort(brr.begin(),brr.end());
        cout<<"Case "<<counter<<":"<<endl;
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a;
            temp=lower_bound(brr.begin(),brr.end(),a)-brr.begin();
            //cerr<<"RR "<<temp<<" "<<brr[temp]<<" "<<brr[temp-1]<<endl;
            if(temp-1>=0)
            {
                if(abs(brr[temp]-a)<abs(brr[temp-1]-a)) ans=brr[temp];
                else ans=brr[temp-1];
            }
            else ans=brr[temp];
            cout<<"Closest sum to "<<a<<" is "<<ans<<"."<<endl;
        }
    }
    return 0;
}
