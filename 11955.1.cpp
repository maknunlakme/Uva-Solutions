#include<iostream>
#include<iomanip>
#include<cstdio>
#include<sstream>
using namespace std;
long double combination(long double n, long double temp)
{
    if(n==temp)
    {
        return 1;
    }
    else
    {
        return n*combination(n-1,temp);
    }
}
long double factorial(long double m)
{
    if(m==0)
    {
        return 1;
    }
    else
    {
        return m*factorial(m-1);
    }
}
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    long double m,temp,total,factm,test;
    int i,j,n,powera,powerb,counter=1;
    char t;
    cin>>test;
    string line,a,b;
    for(i=0; i<test; i++)
    {
        cin>>line;
        stringstream ss(line);
        while(ss>>t)
        {
            if(t=='+')
            {
                break;
            }
            if(t!='(')
            {
                a.push_back(t);
            }
        }
        while(ss>>t)
        {
            if(t==')')
            {
                break;
            }
            b.push_back(t);
        }
        ss>>t;
        ss>>n;
        cout<<"Case "<<counter<<": ";
        if(n==1)
        {
            cout<<a<<"+"<<b<<endl;
        }
        else
        {
            cout<<a<<"^"<<n<<"+";
            powera=n-1;
            powerb=1;
            for(j=1; j<n; j++)
            {
                temp = n-j;
                total = n*combination(n-1,temp);
                factm = j*factorial(j-1);
                total /=factm;
                cout<<setprecision(18)<<total<<"*";
                cout<<a;
                if(powera!=1)
                {
                    cout<<"^"<<powera;
                }
                cout<<"*";
                cout<<b;
                if(powerb!=1)
                {
                    cout<<"^"<<powerb;
                }
                cout<<"+";
                powera--;
                powerb++;
            }
            cout<<b<<"^"<<n<<endl;
        }
        a.clear();
        b.clear();
        counter++;
        //temp = n-m;
        //total = n*combination(n-1,temp);
        //factm = m*factorial(m-1);
        //total /=factm;
        //cout << n << " things taken " << m << " at a time is " << fixed << setprecision(0) << total << " exactly." << endl;
    }
}
