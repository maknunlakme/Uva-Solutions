#include<iostream>
using namespace std;
int main()
{
    int a,b,c,test;
    cin>>test;
    while(test!=0)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>=b&&a>=c)
        {
            if(b+c>a)
            {
                cout<<"OK"<<endl;
            }
            else
            {
                cout<<"Wrong!!"<<endl;
            }
        }
        else if(b>=a&&b>=c)
        {
            if(a+c>b)
            {
                cout<<"OK"<<endl;
            }
            else
            {
                cout<<"Wrong!!"<<endl;
            }
        }
        else if(c>=a&&c>=b)
        {
            if(a+b>c)
            {
                cout<<"OK"<<endl;
            }
            else
            {
                cout<<"Wrong!!"<<endl;
            }
        }
        test--;
    }
    return 0;
}
