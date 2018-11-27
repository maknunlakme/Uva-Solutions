#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int test,allowed=0;
    float length,width,depth,weight,a=56.0,b=45.0,c=25.0,d=125.0,e=7.0;
    bool allow;
    cin>>test;
    while(test--)
    {
        scanf("%f%f%f%f",&length,&width,&depth,&weight);
        if(((length<a&&width<b&&depth<c)||(length+width+depth<d))&&(weight<e))
        {
            cout<<1<<endl;
            allowed++;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    cout<<allowed<<endl;
    return 0;
}
