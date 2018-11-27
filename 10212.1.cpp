#include<iostream>
#define MOD 1000000000
using namespace std;

int main()
{
    long long int a,b,r,i,total;
    while(cin>>a>>b)
    {
        r=a-b;
        total=1;
        for(i=a;i>r;i--)
        {
            total*=i;
            //cout<<"TO "<<total<<endl;
            //cout<<"T "<<total<<endl;
            while(total%10==0)
            {
                total/=10;
            }
            total%=MOD;
            //cout<<total<<" "<<i<<" "<<r<<endl;
        }
        cout<<total%10<<endl;
    }
    return 0;
}
