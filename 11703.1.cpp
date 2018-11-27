#include<iostream>
#include<cmath>
#define X 1000000
using namespace std;

long long arr[X+10];

int main()
{
    long long n,i;
    arr[0]=1;
    for(i=1; i<=X; i++)
    {
        arr[i]=(arr[(int)floor(i-sqrt(i))]+arr[(int)floor(log(i))]+arr[(int)floor(i*sin(i)*sin(i))])%1000000;
    }
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        else
            cout<<arr[n]<<endl;
    }
    return 0;
}
