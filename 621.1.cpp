#include<iostream>
using namespace std;
int main()
{
    long long test,code;
    cin>>test;
    while(test!=0)
    {
        cin>>code;
        if(code==1||code==4||code==78)
        {
            cout<<"+"<<endl;
        }
        else if(code%100==35)
        {
            cout<<"-"<<endl;
        }
        else if(code%10==4)
        {
            while(code>200)
            {
                code/=10;
            }
            if(code==190)
            {
                cout<<"?"<<endl;
            }
            else
            {
                while(code>10)
                {
                    code/=10;
                }
                if(code==9)
                {
                    cout<<"*"<<endl;
                }
            }
        }
        else
        {
            while(code>200)
            {
                code/=10;
            }
            if(code==190)
            {
                cout<<"?"<<endl;
            }
        }
        test--;
    }
    return 0;
}
