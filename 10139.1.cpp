#include<iostream>
#include<vector>
#define X 100000
using namespace std;

vector<int>prime;
vector<pair<int,int> >divi;
int arr[X+10];

void sieve()
{
    long long i,j;
    for(i=2; i*i<=X; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2; i<=X; i++)
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
    long long n,m,temp,blah,i,counter;
    bool no;
    while(cin>>n>>m)
    {
        temp=m;
        divi.clear();
        for(i=0; i<prime.size() and prime[i]<=temp; i++)
        {
            if(temp%prime[i]==0)
            {
                counter=0;
                while(temp%prime[i]==0)
                {
                    temp/=prime[i];
                    counter++;
                }
                divi.push_back({prime[i],counter});
                //cerr<<"AA "<<i<<" "<<prime[i]<<" "<<counter<<endl;
            }
        }
        if(temp>1)
        {
            divi.push_back({temp,1});
        }
        no=false;
        for(i=0;i<divi.size();i++)
        {
            blah=n;
            counter=0;
            while(divi[i].first<=blah)
            {
                counter+=blah/divi[i].first;
                blah/=divi[i].first;
            }
            //cerr<<"SSS "<<counter<<" "<<divi[i].first<<" "<<divi[i].second<<endl;
            if(counter<divi[i].second)
            {
                no=true;
                break;
            }
        }
        if(no==false)
        {
            cout<<m<<" divides "<<n<<"!"<<endl;
        }
        else
        {
            cout<<m<<" does not divide "<<n<<"!"<<endl;
        }
    }
    return 0;
}
