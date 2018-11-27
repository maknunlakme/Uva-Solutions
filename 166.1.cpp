#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#define inf 999999999
using namespace std;

int coins[500];
int Count(int S[],int C[],int m,int n)
{
    int table[n+1],i,j,k,mini,temp[m],coin;
    memset(table, 0, sizeof(table));
    for(i=1; i<=n; i++)
    {
        for(k=0;k<m;k++)
        {
            temp[k]=C[k];
            //cout<<"temp k"<<temp[k]<<" "<<k<<endl;
        }
        mini=inf;
        for(j=0; j<m; j++)
        {
            //cout<<" J "<<j<<" M "<<m<<endl;
            cout<<"S[j] "<<S[j]<<" j "<<j<<" i "<<i<<" table "<<table[i-S[j]]<<" temp[j] "<<temp[j]<<endl;
            if(S[j]>n)
            {
                break;
            }
            else if((1+table[i-S[j]])<mini&&temp[j]>0)
            {
                mini=1+table[i-S[j]];
                cout<<"mini "<<mini<<" i "<<i<<" S[j] "<<S[j]<<" table "<<table[i-S[j]]<<" temp[j] "<<temp[j]<<endl;
                temp[j]--;
                coin=S[i];
            }
        }
        table[i]=mini;
        coins[i]=coin;
        while(n>0)
        {
            C[coins[n]]--;
            cout<<"n "<<n<<" C[coins[n]] "<<C[coins[i]]<<endl;
            n-=coins[n];
            cout<<" N "<<n<<endl;
            getchar();
        }
    }
    return table[n];
}

int main()
{
    int m=6;
    int arr[m],i;
    int brr[]={5,10,20,50,100,200};
    int n,a,b,c,d,e,f;
    double temp;
    while(cin>>a>>b>>c>>d>>e>>f)
    {
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
        {
            break;
        }
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;
        cin>>temp;
        n=round(temp*100);
        cout<<Count(brr,arr,m,n)<<endl;
    }
    return 0;
}

