#include<iostream>
#define X 90
using namespace std;

long long int arr[X+20];

void fibo()
{
    int i;
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    for(i=3;i<=X;i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+1;
        //cout<<i<<" "<<arr[i]<<endl;
    }
}
int main()
{
    fibo();
    int n;
    while(1)
    {
        cin>>n;
        if(n<0)
        {
            break;
        }
        else
        {
            cout<<arr[n]<<" "<<arr[n+1]<<endl;
        }
    }
    return 0;
}
