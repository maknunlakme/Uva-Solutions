#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define X 2000000
using namespace std;

int arr[X+20]={0};
vector<pair<int,int> >divisor;
int div()
{
    int i,j;
    for(i=1;i<=X;i++)
    {
        for(j=2;j<=X;j+=i)
        {
            arr[j]++;
        }
    }
    for(i=2;i*i<=X;i++)
    {
        arr[i*i]++;
    }
    for(i=1;i<=X;i++)
    {
        divisor.push_back(make_pair(arr[i],i));
    }
    sort(divisor.begin(),divisor.end());
}

int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    div();
    int i,n;
    for(i=0;i<X;i++)
    {
        cout<<i<<" "<<divisor[i].first<<" "<<divisor[i].second<<endl;
    }
    for(i=0;;i++)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<divisor[n-1].second<<endl;
        }
    }
    return 0;
}
