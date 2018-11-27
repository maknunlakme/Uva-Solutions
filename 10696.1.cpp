#include<iostream>
using namespace std;
int f91(int n)
{
    if(n<=100)
    {
        return f91(f91(n+11));
    }
    else
    {
        return n-10;
    }
}
int main()
{
    int n,m;
    while(1)
    {
        cin>>n;
        m=n;
        if(n==0)
        {
            break;
        }
        n=f91(n);
        cout<<"f91("<<m<<") = "<<n<<endl;
    }
}
