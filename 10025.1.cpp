#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test,n,answer,m,newans;
    double k;
    cin>>test;
    while(test--)
    {
        cin>>k;
        if(k<0)
        {
            k=abs(k);
        }
        n=((-1)+sqrt((k*8)+1))/2;
        m=k;
        if(m==0)
        {
            cout<<3<<endl;
        }
        else
        {
            answer=(n*(n+1))/2;
            if(answer==m)
            {
                //cout<<m<<" "<<answer<<endl;
                cout<<n<<endl;
            }
            else
            {
                if(answer<k)
                {
                    n++;
                    answer=(n*(n+1))/2;
                }
                while((m-answer)%2!=0)
                {
                    //cout<<"bling"<<m-answer<<endl;
                    n++;
                    answer=(n*(n+1))/2;
                }
                cout<<n<<endl;
            }
        }
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
