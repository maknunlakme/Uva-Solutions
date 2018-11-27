#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0||b==0||c==0)
        {
            cout<<"The radius of the round table is: 0.000"<<endl;
        }
        else
        {
            double s = (a+b+c)/2;
            double temp=(s*(s-a)*(s-b)*(s-c));
            double temp2=sqrt(temp)/s;
            cout<<fixed<<setprecision(3)<<"The radius of the round table is: "<<temp2<<endl;
        }
    }
    return 0;
}
