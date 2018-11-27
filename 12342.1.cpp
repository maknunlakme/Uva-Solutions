#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,n,i;
    double tax;
    cin>>test;
    for(i=0; i<test; i++)
    {
        cin>>n;
        tax=0.0;
        if(n<=180000)
        {
            tax=0;
        }
        else
        {
            n-=180000;
            if(n<=300000)
            {
                tax=n*0.1;
                //cout<<n<<" 1 "<<tax<<endl;
            }
            else
            {
                tax=300000*0.1;
                //cout<<n<<" 2 "<<tax<<endl;
                n-=300000;
                if(n<=400000)
                {
                    tax+=n*0.15;
                    //cout<<n<<" 3 "<<tax<<endl;
                }
                else
                {
                    tax+=400000*.15;
                    //cout<<n<<" 4 "<<tax<<endl;
                    n-=400000;
                    if(n<=300000)
                    {
                        tax+=n*0.2;
                        //cout<<n<<" 5 "<<tax<<endl;
                    }
                    else
                    {
                        tax+=300000*0.2;
                        //cout<<n<<" 6 "<<tax<<endl;
                        n-=300000;
                        if(n>0)
                        {
                            tax+=n*0.25;
                            //cout<<n<<" 7 "<<tax<<endl;
                        }
                    }
                }
            }
        }
        cout<<"Case "<<i+1<<": ";
        if(tax==0)
        {
            cout<<0<<endl;
        }
        else if(tax<=2000)
        {
            cout<<2000<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(0)<<(ceil(tax))<<endl;
        }
    }
    return 0;
}
