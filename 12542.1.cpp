#include<iostream>
#define X 100100
using namespace std;

int main()
{
    int arr[X],i,j;
    arr[0]=1;
    arr[2]=1;
    for(i=2;i*i<X;i++)
    {
        if(arr[i]==0)
        {
            for(j=i;j*j<X;j++)
            {
                arr[i*j]=1;
            }
        }
    }


    return 0;
}
