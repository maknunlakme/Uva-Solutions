#include<iostream>
#include<cmath>
using namespace std;

int counter(int n)
{
    int counting=0;
    while(n>0)
    {
        n/=10;
        counting++;
    }
    return counting;
}

int check(int n)
{
    int total=0,length;
    length=counter(n);
    while(n>0)
    {
        total+=ceil(pow(n%10,length));
        //cout<<total<<" "<<n%10<<endl;
        n/=10;
    }
    return total;
}
int main()
{
    int test,n,newn;
    cin>>test;
    while(test--)
    {
        cin>>n;
        newn=check(n);
        if(newn==n)
        {
            cout<<"Armstrong"<<endl;
        }
        else
        {
            cout<<"Not Armstrong"<<endl;
        }
    }
    return 0;
}
