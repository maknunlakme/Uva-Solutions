#include<iostream>
#include<cmath>
using namespace std;

int arr[30];

int main()
{
    long long test,i,n,m,d,k,sum,an;
    cin>>test;
    while(test--)
    {
        cin>>m;
        for(i=0;i<=m;i++)
        {
            cin>>arr[i];
        }
        cin>>d>>k;
        n=0;
        sum=0;
        while(1)
        {
            sum+=n*d;
            if(sum>=k)
            {
                an=0;
                for(i=0;i<=m;i++)
                {
                    an+=arr[i]*pow(n,i);
                }
                cout<<an<<endl;
                break;
            }
            n++;
        }
    }
    return 0;
}
