#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#define X 10010
using namespace std;

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,a,b,i,j,k,maxi,maxii,arr[X];
    cin>>test;
    while(test--)
    {
        maxi=0;
        cin>>a>>b;
        if(a==1&&b==1)
        {
            cout<<"Between 1 and 1, 1 has a maximum of 1 divisors."<<endl;
        }
        else
        {
            for(i=a,k=0; i<=b; i++,k++)
            {
                arr[k]=2;
                for(j=2; j<=sqrt(i); j++)
                {
                    if(i%j==0)
                    {
                        //cout<<j<<" "<<i/j<<endl;
                        arr[k]++;
                        if((i/j)!=j)
                        {
                            arr[k]++;
                        }
                    }
                }
                if(arr[k]>maxi)
                {
                    maxi=arr[k];
                    maxii=i;

                }
            }
            cout<<"Between "<<a<<" and "<<b<<", "<<maxii<<" has a maximum of "<<maxi<<" divisors."<<endl;
        }
    }
    return 0;
}
