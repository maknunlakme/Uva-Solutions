#include<iostream>
#include<cstring>
#include<cstdio>
#define X 100100
#define MOD 1000000007
using namespace std;

long long power[X+10];
char text[X+10],pattern[X+10];
void powcal()
{
    long long int i;
    power[0]=1;
    for(i=1; i<X; i++)
    {
        power[i]=(((power[i-1]*31)%MOD)+MOD)%MOD;
        //cerr<<i<<" "<<power[i]<<endl;
    }
}

bool rabin()
{
    long long int textlength,patlength,i,sum=0,patsum=0;
    textlength=strlen(text);
    patlength=strlen(pattern);
    if(textlength>=patlength)
    {
        for(i=0; i<patlength; i++)
        {
            patsum=(((patsum+(pattern[i]*power[patlength-i-1]))%MOD)+MOD)%MOD;
            sum=(((sum+(text[i]*power[patlength-i-1]))%MOD)+MOD)%MOD;
            //cerr<<"S "<<sum<<" "<<patsum<<endl;
        }
        if(sum==patsum)
        {
            return true;
        }
        for(i=patlength; i<textlength; i++)
        {
            sum=(((sum-(text[i-patlength]*power[patlength-1]))%MOD)+MOD)%MOD;
            sum=(((sum*31)%MOD)+MOD)%MOD;
            sum=(((sum+text[i])%MOD)+MOD)%MOD;
            //cerr<<"P "<<sum<<" "<<patsum<<endl;
            if(sum==patsum)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    long long int test,i,n;
    powcal();
    cin>>test;
    while(test--)
    {
        cin>>text;
        cin>>n;
        while(n--)
        {
            cin>>pattern;
            if(rabin()==true)
            {
                cout<<"y"<<endl;
            }
            else
            {
                cout<<"n"<<endl;
            }
        }
    }
    return 0;
}
