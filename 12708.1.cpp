#include<iostream>
using namespace std;
int main()
{
    int test;
    long long int n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(n%2!=0)
        {
            n--;
        }
        cout<<n/2<<endl;
    }
    return 0;
}
