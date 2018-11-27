#include<iostream>
using namespace std;

int fact[1010][2610]={0};
int arr[2610];
void factorial()
{
    int i,j,k,temp,keep,multi,carry,add,total;
    fact[0][0]=1;
    arr[0]=1;
    for(i=1;i<1001;i++)
    {
        cout<<"fact for "<<i<<endl;
        temp=i;
        k=0;
        while(temp>0)
        {
            multi=temp%10;
            cout<<"multi "<<multi<<endl;
            temp/=10;
            cout<<"temp "<<temp<<endl;
            keep=0;
            carry=0;
            for(j=0;j<arr[i-1];j++)
            {
                total=(fact[i-1][j]*multi);
                cout<<"total "<<total<<endl;
                total+=keep;
                cout<<"total keep"<<total<<endl;
                keep=total/10;
                cout<<"keep "<<keep<<endl;
                add=(fact[i][j+k]+(total%10));
                cout<<"add "<<add<<endl;
                add+=carry;
                cout<<"add carry"<<add<<endl;
                fact[i][j+k]=add%10;
                cout<<"fact "<<fact[i][j+k]<<endl;
                carry=add/10;
                cout<<"carry "<<carry<<endl;
            }
            arr[i]=j;
            cout<<"arr "<<j<<endl;
            k++;
        }
    }
}

int main()
{
    factorial();
    int n,i;
    while(cin>>n)
    {
        cout<<n<<"!"<<endl;
        for(i=arr[n];i>=0;i--)
        {
            cout<<fact[n][i];
        }
        cout<<endl;
    }
    return 0;
}
