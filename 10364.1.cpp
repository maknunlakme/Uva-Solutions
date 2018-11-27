#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            total+=arr[i];
        }
        if(total%4==0)
        {
            sort(arr,arr+n,greater<int>());

        }
    }
    return 0;
}
