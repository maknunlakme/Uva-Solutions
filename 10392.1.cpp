#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
#define X 10000100
using namespace std;

int arr[X+2]= {0};
vector<int> prime;
int sieve()
{
    int i,j;
    arr[0]=1;
    arr[1]=1;
    for(i=3; i*i<=X; i+=2)
    {
        if(arr[i]==0)
        {
            for(j=i; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    prime.push_back(2);
    for(i=3; i<X; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    sieve();
    long long int n,i;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        for(i=0;prime[i]<=sqrt(n)&&i<prime.size(); i++)
        {
            while(n%prime[i]==0)
            {

                cout<<"    "<<prime[i]<<endl;
                n/=prime[i];
            }
        }
        if(n>1)
        {
            cout<<"    "<<n<<endl;
        }
        cout<<endl;
    }
    return 0;
}
