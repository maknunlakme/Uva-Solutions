#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n,answer,length,i;
    vector<int>arr,brr;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        arr.push_back(n);
        while(1)
        {
            cin>>n;
            if(n==0)
            {
                break;
            }
            arr.push_back(n);
        }
        sort(arr.begin(),arr.end());
        length=arr.size();
        for(i=1;i<length;i++)
        {
            brr.push_back(arr[i]-arr[i-1]);
        }
        length=brr.size();
        answer=brr[0];
        for(i=1;i<length;i++)
        {
            answer=__gcd(answer,brr[i]);
        }
        cout<<answer<<endl;
        arr.clear();
        brr.clear();
    }
    return 0;
}
