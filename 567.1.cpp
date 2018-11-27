#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdio>
using namespace std;

int arr[25][25];

void floyd()
{
    int i,j,k;
    for(k=1;k<=20;k++)
    {
        for(i=1;i<=20;i++)
        {
            for(j=1;j<=20;j++)
            {
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }
}


int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int i,j,n,counter=0,temp,a,b;
    while(cin>>n)
    {
        counter++;
        memset(arr,62,sizeof arr);
        arr[1][1]=1;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            //cerr<<"KKEEEP "<<i<<" "<<temp<<" "<<i<<" "<<n<<endl;
            arr[1][temp]=1;
            arr[temp][1]=1;
        }
        for(i=2; i<20; i++)
        {
            cin>>n;
            arr[i][i]=1;
            for(j=0; j<n; j++)
            {
                cin>>temp;
                //cerr<<"KKEEEP "<<i<<" "<<temp<<" "<<j<<" "<<n<<endl;
                arr[i][temp]=1;
                arr[temp][i]=1;
            }
        }

       /* for(i=1;i<20;i++)
        {
            for(j=1;j<20;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }*/
        floyd();
        cin>>n;
        cout<<"Test Set #"<<counter<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            cout<<setw(2)<<a<<" to "<<setw(2)<<b<<": "<<arr[a][b]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
