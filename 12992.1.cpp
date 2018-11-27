#include<iostream>
using namespace std;
int main()
{
    int test,n,i;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        cout<<"Case #"<<i+1<<": "<<(2*n)-1<<endl;
    }
    return 0;
}
