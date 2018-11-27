#include<iostream>
#include<algorithm>
#define X 1000100
using namespace std;

int n[X+10];

int divisor()
{
    int i,j;
    for(i=1;i<=X;i++)
    {
        for(j=i;j<=X;j+=i)
        {
            n[j]++;
        }
    }
}

int main()
{
    int test,a,b;
    divisor();
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        cout<<*max_element(n+a,n+b)<<endl;
    }
    return 0;
}
