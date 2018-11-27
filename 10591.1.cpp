#include<iostream>
#include<map>
using namespace std;

int squaresum(int n)
{
    int total=0;
    while(n>0)
    {
        total+=(n%10)*(n%10);
        n/=10;
    }
    return total;
}


int main()
{
    int test,n,i,x,newn;
    map<int,int>check;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        newn=n;
        check[n]=1;
        while(1)
        {
            newn=squaresum(newn);
            if(newn==1)
            {
                break;
            }
            else if(check[newn]==1)
            {
                break;
            }
            check[newn]=1;
            //cout<<"mew "<<newn<<endl;
        }
        if(newn==1)
        {
            cout<<"Case #"<<i+1<<": "<<n<<" is a Happy number."<<endl;
        }
        else
        {
            cout<<"Case #"<<i+1<<": "<<n<<" is an Unhappy number."<<endl;

        }
        check.clear();
    }
    return 0;
}
