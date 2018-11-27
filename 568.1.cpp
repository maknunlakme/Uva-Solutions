#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    long long int n,total,a;
    while(cin>>n)
    {
        total=1;
        a=n;
        while(n>0)
        {
            total*=n;
            total%=10000000;
            //cout<<total<<" "<<n<<endl;
            while((total%10)==0)
            {
                total/=10;
            }
            n--;
        }
        cout<<setw(5)<<a;
        cout<<" -> "<<total%10<<endl;
    }
    return 0;
}
