#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test!=0)
    {
        char temp;
        int m,n;
        cin>>temp;
        cin>>m;
        cin>>n;
        if(temp=='r'||temp=='Q')
        {
            cout<<min(m,n)<<endl;
        }
        else if(temp=='K')
        {
            cout<<((m+1)/2)*((n+1)/2)<<endl;
        }
        else if(temp=='k')
        {
            cout<<((m*n)+1)/2<<endl;
        }
        test--;
    }
    return 0;
}
