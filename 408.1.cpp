#include<iostream>
#include<algorithm>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int a,b;
    while(cin>>a>>b)
    {
        cout<<setw(10)<<a;
        cout<<setw(10)<<b;
        if(__gcd(a,b)==1)
        {
            cout<<"    Good Choice"<<endl;
        }
        else
        {
            cout<<"    Bad Choice"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
