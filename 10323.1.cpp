#include<iostream>
using namespace std;
int main()
{
    long long n,total,temp;
    while(cin>>n)
    {
        total = 1;
        if(n>7&&n<14)
        {
            temp = n;
            while(temp>=1)
            {
                total *= temp;
                if(total>6227020800)
                {
                    break;
                }
                temp--;
            }
        }
        if(n>7&&n<14)
        {
            cout<<total<<endl;
        }
        else if((n<0&&n%2!=0)||n>13)
        {
            cout<<"Overflow!"<<endl;
        }
        else if((n<0&&n%2==0)||n<8)
        {
            cout<<"Underflow!"<<endl;
        }
    }
    return 0;
}
