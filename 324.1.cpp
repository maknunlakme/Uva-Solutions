#include<iostream>
#include<cstdio>
#include<iomanip>
#define X 2600
using namespace std;

int mat[1010][X];
int counter[10];
void power(int n)
{
    int i,j,k,total;
    mat[0][0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<X;j++)
        {
            mat[i][j]=mat[i-1][j]*i;
        }
        for(j=0;j<X;j++)
        {
            if(mat[i][j]>=10)
            {
                mat[i][j+1]+=mat[i][j]/10;
                mat[i][j]%=10;
            }
            //cout<<mat[i][j]<<" ";
        }
        //cout<<endl;
        //cout<<endl;
    }
    for(i=0;i<10;i++)
    {
        counter[i]=0;
    }
    for(i=X-1;mat[n][i]==0;i--);
    for(;i>=0;i--)
    {
        counter[mat[n][i]]++;
    }
    cout<<"   ("<<0<<")";
    cout<<setw(5)<<counter[0];
    for(i=1;i<5;i++)
    {
        cout<<"    ("<<i<<")";
        cout<<setw(5)<<counter[i];
    }
    cout<<endl;
    cout<<"   ("<<5<<")";
    cout<<setw(5)<<counter[5];
    for(i=6;i<10;i++)
    {
        cout<<"    ("<<i<<")";
        cout<<setw(5)<<counter[i];
    }
    cout<<endl;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        cout<<n<<"! --"<<endl;
        power(n);
    }
    return 0;
}
