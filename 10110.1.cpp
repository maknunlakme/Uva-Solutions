#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,root;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        long double temp = n;
        temp = sqrt(temp);
        root = static_cast<long long int>(temp);
        if((root*root)==n)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
