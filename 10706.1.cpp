#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test,n,temp;
    cin>>test;
    while(test--)
    {
        cin>>n;
        temp=ceil(((-1)+sqrt(1+(4*2*n)))/2);
        //cout<<temp<<endl;
        temp--;
        temp=(temp*(temp+1))/2;
        cout<<n-temp<<endl;
    }
    return 0;
}
