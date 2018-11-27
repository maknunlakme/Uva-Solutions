#include<iostream>
#include<string>
using namespace std;

string number;
void base(long long int n)
{
    long long int reminder;
    string temp;
    while(n!=0)
    {
        reminder=n%(-2);
        //cout<<reminder<<endl;
        n/=(-2);
        if(reminder<0)
        {
            n++;
            reminder += 2;
        }
        temp=reminder+'0';
        number.insert(0,temp);
    }
}
int main()
{
    long long int test,n,i;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>n;
        if(n==0)
        {
            cout<<"Case #"<<i<<": 0"<<endl;
        }
        else
        {
            base(n);
            cout<<"Case #"<<i<<": "<<number<<endl;
            number.clear();
        }
    }
    return 0;
}
