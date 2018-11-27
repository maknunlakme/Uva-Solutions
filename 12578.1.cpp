#include<iostream>
#include<iomanip>
#include<cmath>
double pi = acos(-1.0);
using namespace std;
int main()
{
    int test,length;
    double width,radius,red_area,green_area;
    cin>>test;
    while(test!=0)
    {
        cin>>length;
        width = length * 0.6;
        radius = length * 0.2;
        red_area = pi*radius*radius;
        green_area = (width*length) - red_area;
        cout<<fixed<<setprecision(2)<<red_area<<" "<<green_area<<endl;
        test--;
    }
    return 0;
}
