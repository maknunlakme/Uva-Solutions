#include<iostream>
using namespace std;

long long int fib[60];
int fibo()
{
    int i;
    fib[0]=1;
    fib[1]=1;
    for(i=2;i<55;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}

int main()
{
    int n,test,i;
    fibo();
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        cout<<"Scenario #"<<i+1<<":"<<endl;
        cout<<fib[n+1]<<endl;
        cout<<endl;
    }
    return 0;
}
