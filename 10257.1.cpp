#include<iostream>
using namespace std;
int main()
{
    int s,p,y,j,d=12,spot,puff,yertle;
    while(cin>>s>>p>>y>>j)
    {
        yertle=(d+j-p-y)/3;
        spot=y+yertle;
        puff=p+yertle;
        cout<<spot<<" "<<puff<<" "<<yertle<<endl;
    }
}
