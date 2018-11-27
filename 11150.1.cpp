#include<iostream>
using namespace std;
int main()
{
    int n,k,total,temp;
    while(cin>>n)
    {
        total = n;
        if(n==2)
        {
            total++;
            n=0;
        }
        while(n>=3)
        {
            total += n/3;
            temp = n%3;
            n /=3;
            n += temp;
            if(n==2)
            {
                total++;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
