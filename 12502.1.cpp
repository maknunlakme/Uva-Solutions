#include<iostream>
using namespace std;
int main()
{
    int test,x,y,z,a;
    cin>>test;
    while(test!=0)
    {
        cin>>x;
        cin>>y;
        cin>>z;
        a=((2*x-y)*z)/(x+y);
        cout<<a<<endl;
        test--;
    }
    return 0;
}
