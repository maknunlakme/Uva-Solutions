#include<iostream>
#include<vector>
#include<cmath>
#define X 1000100
using namespace std;

int arr[X+2]= {0};
vector<int> prime;
int sieve()
{
    int i,j;
    arr[0]=1;
    arr[1]=1;
    for(i=2; i*i<=X; i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            for(j=i; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(; i<X; i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    int n,i;
    bool first;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        first=false;
        cout<<n<<" =";
        if(n<0)
        {
            cout<<" "<<-1;
            n=n-(2*n);
            first=true;
        }
        for(i=0;prime[i]<=sqrt(n); i++)
        {
            //cout<<i<<" "<<prime[i]<<endl;
            while(n%prime[i]==0)
            {
                if(first==false)
                {
                    cout<<" "<<prime[i];
                    first=true;
                }
                else
                {
                    cout<<" x "<<prime[i];
                }
                n/=prime[i];
            }
        }
        if(n>1)
        {
            if(first==false)
            {
                cout<<" "<<n<<endl;
                first=true;
            }
            else
            {
                cout<<" x "<<n<<endl;
            }
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
