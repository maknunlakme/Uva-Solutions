#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    unsigned long long int i,j,n,total;
    char temp;
    n=131071;
    while(cin>>temp)
    {
        total=temp-'0';
        total*=2;
        while(cin>>temp)
        {
            if(temp=='#')
            {
                break;
            }
            total+=(temp-'0');
            total*=2;
            total%=n;
        }
        if(total==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
