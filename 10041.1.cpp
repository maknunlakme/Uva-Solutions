#include<iostream>
#include<cmath>
#define X 2147483647
using namespace std;
int main()
{
    int test,r,arr[550],mini,total,i,j;
    cin>>test;
    while(test--)
    {
        cin>>r;
        mini=X;
        for(i=0;i<r;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<r;i++)
        {
            total=0;
            for(j=0;j<r;j++)
            {
                total+=abs(arr[i]-arr[j]);
            }
            if(mini>total)
            {
                mini=total;
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}
