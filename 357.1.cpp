#include<iostream>
#include<cstring>
using namespace std;

long long int Count(int S[],int m,int n)
{
    long long int table[n+1],i,j;
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
    long long int result;
    while(cin>>n)
    {
        result = Count(arr,m,n);
        if(result==1)
        {
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        }
        else
        {
            cout<<"There are "<<result<<" ways to produce "<<n<<" cents change."<<endl;
        }
    }
    return 0;
}
