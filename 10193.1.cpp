#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int arr[40];

void power()
{
    int i,temp=1;
    for(i=0;i<=30;i++)
    {
        arr[i]=temp;
        temp*=2;
        //cout<<i<<" "<<arr[i]<<endl;
    }
}

int convert(string line)
{
    int length=line.length();
    int i,j,total=0;
    for(i=length-1,j=0;i>=0;i--,j++)
    {
        total+=(line[i]-'0')*arr[j];
    }
    return total;
}
int main()
{
    power();
    string a,b;
    int test,i,j,m,n;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>a>>b;
        m=convert(a);
        n=convert(b);
        if(__gcd(m,n)==1)
        {
            cout<<"Pair #"<<i+1<<": Love is not all you need!"<<endl;
        }
        else
        {
            cout<<"Pair #"<<i+1<<": All you need is love!"<<endl;
        }
    }
    return 0;
}
