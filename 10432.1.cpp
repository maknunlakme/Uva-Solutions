#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double r,n,answer;
    while(cin>>r)
    {
        cin>>n;
        answer = (r*r*n*sin((2*3.1415926535897932384626433832795)/n))/2;
        cout<<fixed<<setprecision(3)<<answer<<endl;
    }
    return 0;
}
