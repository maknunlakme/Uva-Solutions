#include<iostream>
#include<cmath>
using namespace std;
bool isperfect(unsigned long long int n)
{
    unsigned long long int i,total=1;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            total+=i;
            total+=(n/i);
            //cout<<i<<" "<<n/i<<endl;
        }
    }
    //cout<<"total : "<<total<<endl;
    if(total==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int prime[]= {1,1,0,0,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,0,1,0};
int main()
{
    unsigned long long int n,answer,temp1,temp2;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            cout<<"Perfect: "<<1<<"!"<<endl;
        }
        else if(n==2)
        {
            cout<<"Perfect: "<<6<<"!"<<endl;
        }
        else if(n==3)
        {
            cout<<"Perfect: "<<28<<"!"<<endl;
        }
        else if(n==5)
        {
            cout<<"Perfect: "<<496<<"!"<<endl;
        }
        else if(n==7)
        {
            cout<<"Perfect: "<<8128<<"!"<<endl;
        }
        else if(n==13)
        {
            cout<<"Perfect: "<<33550336<<"!"<<endl;
        }
        else if(n==17)
        {
            cout<<"Perfect: "<<8589869056<<"!"<<endl;
        }
        else if(n==19)
        {
            cout<<"Perfect: "<<137438691328<<"!"<<endl;
        }
        else if(n==31)
        {
            cout<<"Perfect: "<<2305843008139952128<<"!"<<endl;
        }
        else
        {

            if(prime[n]==0)
            {
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            }
            else
            {
                cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
            }

        }
    }
    return 0;
}
