#include<iostream>
using namespace std;

int bigmod(int a,int b,int c)
{
    if(b==0)
    {
        return 1;
    }
    else if(b%2==1)
    {
        return ((a%c)*(bigmod(a,b-1,c)%c))%c;
    }
    else
    {
        int temp=bigmod(a,b/2,c)%c;
        return (temp*temp)%c;
    }
}


int main()
{
    int test,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        cout<<bigmod(a,b,c)<<endl;
    }
    cin>>a;
    return 0;
}
