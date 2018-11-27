#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;

vector<pair<int,int>>arr;

int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    int n,i,a,b,c,l,length;
    while(cin>>n)
    {
        for(i=n+1;;i++)
        {
            l=lcm(n,i);
            a=l/n;
            b=l/i;
            c=a-b;
            if(c==1)
            {
                arr.push_back(make_pair(l,i));
            }
            else if(l%c==0)
            {
                arr.push_back(make_pair(l/c,i));
            }
            if(l==i)
            {
                break;
            }
        }
        length=arr.size();
        cout<<length<<endl;
        for(i=0;i<length;i++)
        {
            cout<<"1/"<<n<<" = 1/"<<arr[i].first<<" + 1/"<<arr[i].second<<endl;
        }
        arr.clear();
    }
    return 0;
}
