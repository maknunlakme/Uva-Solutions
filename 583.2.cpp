#include<iostream>
#include<vector>
#define X 100
using namespace std;

int arr[X]={0};
vector<int>prime;
int sieve()
{
    int arr[X]={0};
    int i,j;
    arr[0]=1;
    arr[1]=1;
    for(i=2;(i*i)<=X;i++)
    {
        cout<<"helo  "<<i<<endl;
        if(arr[i]==0)
        {
            for(j=i;(i*j)<=X;j++)
            {
                //cout<<"Hola :"<<j<<endl;
                arr[i*j]=1;
                cout<<i<<" "<<j<<" "<<i*j<<endl;
            }
        }
    }
    for(i=3;i<=X;i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}


int main()
{
    int i;
    sieve();
    for(i=0;i<X;i++)
    {
        cout<<prime[i]<<" ";
    }
    return 0;
}
