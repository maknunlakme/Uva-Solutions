#include<iostream>
#include<cstring>
#include<iomanip>
#include<cmath>
using namespace std;

long long int Count(long long int S[],long long int m,long long int n)
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
    long long int arr[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    long long int m=11;
    long long int  n,result;
    double temp,taking=0.00,answer;
    while(1)
    {
        cin>>temp;
        if(temp==taking)
        {
            break;
        }
        n=round(temp*100);
       // cout<<"n : "<<n<<endl;
        result=Count(arr,m,n);
        cout<<fixed<<setprecision(2)<<setw(6)<<temp<<setw(17)<<Count(arr,m,n)<<endl;
    }
    return 0;
}
