#include<iostream>
#include<cstring>
using namespace std;

int Count(int S[],int m,int n)
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
    int arr[]={1,5,10,25,50};
    int m=5;
    int n;
    while(cin>>n)
    {
        cout<<Count(arr,m,n)<<endl;
    }
    return 0;
}
