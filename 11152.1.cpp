#include<iostream>
#include<iomanip>
#include<algorithm>
#define PI 3.14159265358979323846264338328
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        double triangle_half_perimeter = (a+b+c)/2;
        double triangle_area = sqrt(triangle_half_perimeter*(triangle_half_perimeter-a)*(triangle_half_perimeter-b)*(triangle_half_perimeter-c));
        double circumcircle_radius = (a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        double circumcircle_area = PI*circumcircle_radius*circumcircle_radius;
        double incircle_radius = (2*triangle_area)/(a+b+c);
        double incircle_area = PI*incircle_radius*incircle_radius;
        cout<<fixed<<setprecision(4)<<circumcircle_area-triangle_area<<" "<<triangle_area-incircle_area<<" "<<incircle_area<<endl;
    }
    return 0;
}
