#include <iostream>
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;

vector<long long>arr,a;

int main()
{
    long long n=0,temp,low,maxi,i;
    while(cin>>temp)
    {
        a.push_back(temp);
        n++;
    }
    vector<long long> d(n+1, LLONG_MAX),c(n+1,0);
    maxi=d[0]=-LLONG_MAX;
    for (i = 0; i < n; i++)
    {
        low=lower_bound(d.begin(), d.end(), a[i])-d.begin();
        //cerr<<"DD "<<a[i]<<" "<<low<<endl;
        d[low]=a[i];
        c[i]=low;
        maxi=max(maxi,low);
    }
    for(i=n-1; i>=0 and maxi>0; i--)
    {
        if(c[i]==maxi)
        {
            arr.push_back(a[i]);
            maxi--;
        }
    }
    cout<<arr.size()<<endl;
    cout<<"-"<<endl;
    for(i=arr.size()-1; i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }
}
