#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int test,a,n,i,b;
    cin>>test;
    while(test--)
    {
        cin>>a;
        if(a==0)
        {
            cout<<0<<endl;
        }
        else if(a==1)
        {
            cout<<1<<endl;
        }
        else
        {
            stack<int>number;
            for(i=9; i>1; i--)
            {
                while(a%i==0)
                {
                    number.push(i);
                    a/=i;
                }
            }
            if(number.empty()||a>1)
            {
                cout<<-1<<endl;
            }
            else
            {
                while(!number.empty())
                {
                    cout<<number.top();
                    number.pop();
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
