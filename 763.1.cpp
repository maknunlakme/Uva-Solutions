#include<iostream>
#include<cstdio>
#include<string>
#define X 122
using namespace std;

long double fibo[X+10];

void fibonacci()
{
    int i;
    fibo[0]=1;
    fibo[1]=1;
    for(i=2; i<=X; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        //cout<<i<<" "<<fibo[i]<<endl;
    }
}

long double fi_to_num(string line)
{
    int i,j,length;
    long double total=0;
    length=line.length();
    for(i=length-1,j=1; i>=0; i--,j++)
    {
        if(line[i]=='1')
        {
            total+=fibo[j];
        }
    }
    //cout<<"Total "<<total<<endl;
    return total;
}

void num_to_fi(long double n)
{
    int i;
    for(i=X; i>=0; i--)
    {
        if(n>=fibo[i])
        {
            break;
        }
    }
    for(; i>0; i--)
    {
        if(n>=fibo[i])
        {
            n-=fibo[i];
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    cout<<endl;
}
int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    fibonacci();
    int test,i,j,counter=0;
    long double n;
    string a,b;
    while(cin>>a>>b)
    {
        if(counter!=0)
        {
            cout<<endl;
        }
        n=fi_to_num(a)+fi_to_num(b);
        //cout<<" N "<<n<<endl;
        num_to_fi(n);
        counter++;
    }
    return 0;
}
