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
    int n;
    fibo();
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        cout<<fib[n]<<endl;
    }
    return 0;
}
