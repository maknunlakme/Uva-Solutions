#include<iostream>
using namespace std;

int arr[20];
int used[20];

int rec(int pos,int total)
{
    if(pos==n)
    {
        if(total==t)
        {
            counter++;
        }
        return;
    }
    for(i=0;i<n;i++)
    {
        if(total+arr[i]<t)
        {
            rec()
        }
    }
}

int main()
{
    int t,n;
    while(1)
    {
        cin>>t>>n;
        if(t==0 and n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    return 0;
}
