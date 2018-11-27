#include<iostream>
#include<vector>
#define X 10100
using namespace std;

int arr[X+10];
vector<int>prime;
vector<pair<int,int> >divi;

void sieve()
{
    int i,j;
    for(i=2;i*i<=X;i++)
    {
        if(arr[i]==0)
        {
            for(j=2;i*j<=X;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2;i<=X;i++)
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
    int test,t,temp,n,m,counter,i,blah,power;
    bool no;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        cin>>m>>n;
        divi.clear();
        temp=m;
        no=false;
        power=10000000;
        for(i=0;i<prime.size() and temp>=prime[i];i++)
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
                //cerr<<"AA "<<prime[i]<<" "<<counter<<endl;
            }
        }
        if(temp>1)
        {
            divi.push_back({temp,1});
        }
        for(i=0;i<divi.size();i++)
        {
            temp=n;
            blah=0;
            while(temp)
            {
                blah+=temp/divi[i].first;
                temp/=divi[i].first;
            }
            //cerr<<"AA "<<divi[i].first<<" "<<divi[i].second<<" "<<temp<<" "<<blah<<endl;
            if(blah>=divi[i].second)
            {
                power=min(power,blah/divi[i].second);
            }
            else
            {
                no=true;
                break;
            }
        }
        cout<<"Case "<<t<<":"<<endl;
        if(no==true)
        {
            cout<<"Impossible to divide"<<endl;
        }
        else
        {
            cout<<power<<endl;
        }
    }
    return 0;
}
