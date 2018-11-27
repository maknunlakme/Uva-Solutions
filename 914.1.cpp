#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define X 100
using namespace std;

int sv[X];
vector<int> prime;
void sieve()
{
    int i,j;
    sv[0]=1;
    sv[1]=1;
    for(i=2; i*i<=X; i++)
    {
        if(sv[i]==0)
        {
            prime.push_back(i);
            for(j=i; i*j<=X; j++)
            {
                sv[i*j]=1;
            }
        }
    }
    if(i%2==0)
    {
        i++;
    }
    for(; i<=X; i+=2)
    {
        if(sv[i]==0)
        {
            prime.push_back(i);
        }
    }
    for(i=0; i<prime.size(); i++)
    {
        cout<<prime[i]<<endl;
    }
}

int main()
{
    map<int,int>primegap;
    int lower,upper,test,found,maxi=0,temp,i;
    sieve();
    cin>>test;
    while(test--)
    {
        cin>>lower>>upper;
        found=(lower_bound(prime.begin(),prime.end(),lower)-prime.begin());
        cout<<found<<endl;
        cout<<"hello"<<endl;
        for(i=found+1; prime[i]<=upper; i++)
        {
            if(!primegap[prime[i]-prime[i-1]])
            {
                cout<<"working"<<endl;
                primegap[prime[i]-prime[i-1]]=1;
            }
            else
            {
                cout<<"yes"<<endl;
                primegap[prime[i]-prime[i-1]]++;
            }
            temp=primegap[prime[i]-prime[i-1]];
            cout<<"temp "<<temp<<endl;
            if(maxi<temp)
            {
                maxi=temp;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
