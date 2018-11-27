#include<iostream>
#include<cstdio>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int n,temp,div,i,j,k,l;
    bool star=false;

    while(cin>>n)
    {
        if(n==0||n>100)
        {
            break;
        }
        else
        {
            vector<int> fact(110,0);
            temp=n;
            for(k=temp; k!=0; k--)
            {
                div=k;
                while(div%2==0)
                {
                    fact[2]++;
                    div/=2;
                }
                for(j=3; j*j<=div; j+=2)
                {
                    while(div%j==0)
                    {
                        fact[j]++;
                        div/=j;
                    }
                }
                if(div>1)
                {
                    fact[div]++;
                }
            }
            cout<<setw(3)<<n<<"! = ";
            if(fact[2]!=0)
            {
                cout<<setw(2)<<fact[2];
            }
            int counter=0;
            for(i=3; i<=n; i+=2)
            {
                if(fact[i]!=0)
                {
                    if(counter==14)
                    {
                        cout<<endl;
                        cout<<"      ";
                        counter=0;
                    }
                    cout<<setw(3)<<fact[i];
                    counter++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
