#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    double a,b,c,s,temp;
    while(cin>>a>>b>>c)
    {
        if(a<=0||b<=0||c<=0)
        {
            temp=-1;
            cout<<fixed<<setprecision(3)<<temp<<endl;
        }
        else
        {
            s = (a+b+c)/2;
            temp =(4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c)));
            if(temp>0)
            {
                cout<<fixed<<setprecision(3)<<temp<<endl;
            }
            else
            {
                temp=-1;
                cout<<fixed<<setprecision(3)<<temp<<endl;
            }
        }
    }
    return 0;
}
