#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    bool first;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        first=false;
        cout<<n<<" =";
        if(n<0)
        {
            cout<<" "<<-1;
            first=true;
            n=(n-2*n);
            //cout<<"N "<<n<<endl;
        }
        while(n%2==0)
        {
            if(first==false)
            {
                cout<<" "<<2;
                first=true;
            }
            else
            {
                cout<<" x "<<2;
            }
            n/=2;
        }
        for(i=3;i*i<=n;i+=2)
        {
            while(n%i==0)
            {
                if(first==false)
                {
                    cout<<" "<<i;
                }
                else
                {
                    cout<<" x "<<i;
                }
                n/=i;
            }
        }
        if(n>1)
        {
            cout<<" x "<<n;
        }
        cout<<endl;
    }
    return 0;
}
