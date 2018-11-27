#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int counter, a,b;
    while(1)
    {
        cin>>a;
        cin>>b;
        counter = 0;
        if(a==-1&&b==-1)
        {
            break;
        }
        while(a!=b)
        {
            if(abs(a-b)<=50&&a<b)
            {
                if(a==99)
                {
                    a == 0;
                }
                else
                {
                    a++;
                }
                counter++;
            }
            else if(abs(a-b)<=50&&a>b)
            {
                if(a==0)
                {
                    a = 99;
                }
                else
                {
                    a--;
                }
                counter++;
            }
            else if(abs(a-b)>50&&a<b)
            {
                if(a==0)
                {
                    a = 99;
                }
                else
                {
                    a--;
                }
                counter++;

            }
            else if(abs(a-b)>50&&a>b)
            {
                if(a==99)
                {
                    a = 0;
                }
                else
                {
                    a++;
                }
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}
