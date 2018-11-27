#include<iostream>
using namespace std;
int main()
{
    long long int b,n,bank[30],d,c,v;
    bool okay;
    while(1)
    {
        okay=true;
        cin>>b>>n;
        if(b==0&&n==0)
        {
            break;
        }
        for(int i=0;i<b;i++)
        {
            cin>>bank[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>d>>c>>v;
            bank[d-1]-=v;
            bank[c-1]+=v;
        }
        for(int i=0;i<b;i++)
        {
            if(bank[i]<0)
            {
                okay=false;
            }
        }
        if(okay==true)
        {
            cout<<"S"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
}
