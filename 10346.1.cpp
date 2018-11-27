#include<iostream>
using namespace std;
int main()
{
    int n,k,total,temp;
    while(cin>>n&&cin>>k)
    {
        total = n;
        while(n>=k)
        {
            total += n/k;
            temp = n%k;
            n /=k;
            n += temp;
        }
        cout<<total<<endl;
    }
    return 0;
}
