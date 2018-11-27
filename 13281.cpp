#include<iostream>
#include<cmath>
#define mod 1000007
long long int a[10100];
using namespace std;
int calculate(int k,int c,int n,int b)
{
    long long int sum=0,i,j,temp=0;
    a[0]=b;
    cout<<k<<" "<<c<<" "<<n<<" "<<b<<endl;
    for(j=1; j<n; j++)
    {
        a[j]=((k*a[j-1])+c)%mod;
        //cout<<"a[j] "<<a[j]<<endl;
        //sum+=a[j];
        //cout<<"sum "<<sum<<endl;
    }
    for( i = 0; i < n; i++ )
    {
        temp=0;
        for( j = i + 1; j < n; j++ )
        {
            temp += abs( a[i] - a[j] ); // abs means absolute value
            //cout<<a[i]<<" "<<a[j]<<" "<<temp<<endl;
        }
        sum+=temp;
        //cout<<"sum "<<sum<<endl;
    }
    cout<<"SUM ::: "<<sum<<endl;
    return sum;

}
int main()
{
    long long int test,k,c,n,sum,i,j,temp,total,add;
    cin>>test;
    for(i=0; i<test; i++)
    {
        cin>>k>>c>>n>>a[0];
        sum=a[0];
        total=0;
        for(j=1; j<n; j++)
        /*{
            a[j]=((k*a[j-1])+c)%mod;
            //cout<<"a[j] "<<a[j]<<endl;
            sum+=a[j];
            //cout<<"sum "<<sum<<endl;
        }*/
        calculate(k,c,n,a[0]);
        for(j=0; j<n-1; j++)
        {
            temp=(a[j]*(n-(j+1)));
            sum-=a[j];
            total+=abs(sum-temp);
            //cout<<"total :"<<total<<endl;
            //cout<<"sum "<<sum-temp<<endl;
        }
        cout<<"Case "<<i+1<<": "<<total<<endl;
    }
    return 0;
}
