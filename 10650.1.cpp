#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#define X 40000
using namespace std;

int arr[X+10];
vector<int>prime,diff;
vector<pair<int,int> >position;
int sieve()
{
    int i,j,prev,start,ends;
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
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
    prev=2;
    prime.push_back(prev);
    for(i=3; i<=X; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            diff.push_back(i-prev);
            prev=i;
        }
    }
    for(i=0; i<diff.size(); i++)
    {
        //cout<<diff[i]<<" "<<diff[i+1]<<endl;
        if(diff[i]==diff[i+1]&&prime[i+2]<=X)
        {
            //cout<<prime[i]<<" "<<prime[i+1]<<" "<<prime[i+2];
            start=i;
            j=2;
            while(diff[i]==diff[i+j]&&prime[i+j+1]<=X)
            {
               // cout<<" "<<prime[i+j+1];
                j++;
            }
           // cout<<endl;
            ends=i+j;
            i+=(j-1);
            position.push_back(make_pair(start,ends));
        }
    }
}

int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    sieve();
    int a,b,temp,value,i,j,start,ends;
    while(1)
    {
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if(a==0&&b==0)
        {
            break;
        }
        for(i=0; i<position.size(); i++)
        {
           // cout<<prime[position[i].first]<<" "<<prime[position[i].second]<<endl;
            if(prime[position[i].first]>=a&&prime[position[i].second]<=b)
            {
                j=position[i].first;
                cout<<prime[j];
                j++;
                while(j<=position[i].second)
                {
                    cout<<" "<<prime[j];
                    j++;
                }
                cout<<endl;
            }
            else if(position[i].second>b)
            {
                break;
            }
        }
    }
    return 0;
}
