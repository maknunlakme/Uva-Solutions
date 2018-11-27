#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int test,x,y,r;
    float sqr;
    cin>>test;
    while(test!=0)
    {
        cin>>x;
        cin>>y;
        cin>>r;
        sqr = sqrt((x*x)+(y*y));
        cout<<fixed<<setprecision(2)<<r-sqr<<" "<<r+sqr<<endl;
        test--;
    }
    return 0;
}
