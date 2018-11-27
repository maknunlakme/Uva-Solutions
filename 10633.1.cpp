//calculation based on extended Euclid, N=10a+b
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int n,x,y,loop,answer,i;
    bool print_space;
    while(1)
    {
        cin>>n;
        print_space=false;
        if(n==0)
        {
            break;
        }
        loop=(n*10)/9;
        if(n%9==0)
        {
            cout<<loop-1<<" "<<loop<<endl;
        }
        else
        {
            cout<<loop<<endl;
        }
    }
    return 0;
}
