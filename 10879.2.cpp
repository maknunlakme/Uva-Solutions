#include<iostream>
#include<vector>
#define X 10000000
using namespace std;
int main()
{
    vector<long long int>arr(X,0);
    long long int test,counter=0;
    cin>>test;
    while(test--)
    {
        long long int k,a=0,b=0,c=0,d=0;
        cin>>k;
        counter++;
        long long int i;
        for(i=2;(i*i)<=k;i++)
        {
            if((k%i)==0)
            {
                a=k/i;
                b=i;
                break;
            }
        }
        for(i=2;(i*i)<=a;i++)
        {
            if((a%i)==0)
            {
                c=a/i;
                d=b*i;
                break;
            }
        }
        cout<<"Case #"<<counter<<": "<<k<<" = "<<a<<" * "<<b<<" = "<<c<<" * "<<d<<endl;
    }
}
