#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int test,a,n,i,b;
    cin>>test;
    while(test--)
    {
        string number;
        cin>>a;
        n=a;
        if(n%2==0)
        {
            number.push_back('0'+2);
            n/=2;
        }
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                number.push_back('0'+i);
                n/=i;
            }
        }
        if(n>1)
        {
            number.push_back('0'+n);
        }
        sort(number.begin(),number.end());
        b=1;
        for(i=0;i<number.size();i++)
        {
            b*=(number[i]-'0');
        }
        //cout<<b<<" "<<number<<endl;
        if(a==b)
        {
            cout<<number<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
