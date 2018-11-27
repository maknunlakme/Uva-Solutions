#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

long long int Count(int S[],int m,int n)
{
    int table[n+1],i,j;
    memset(table, 0, sizeof(table));
    table[0]=1;
    for(i=0; i<m; i++)
    {
        for(j=S[i]; j<=n; j++)
        {
            table[j] += table[j-S[i]];
        }
    }
    return table[n];
}
int main()
{
    int arr[21],i;
    for(i=0;i<21;i++)
    {
        arr[i]=round(pow(i+1,3));
        //cout<<arr[i]<<endl;
    }
    int m=21;
    int n;
    while(cin>>n)
    {
        cout<<Count(arr,m,n)<<endl;
    }
    return 0;
}

