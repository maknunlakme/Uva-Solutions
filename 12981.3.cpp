#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,test,i;
    bool possible;
    cin>>test;
    for(i=0;i<test;i++)
    {
        possible=false;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        if(a==e&&d==h&&b==f&&c==g)
        {
            possible=true;
        }
        if(a==e&&d==h&&b==g&&c==f)
        {
            possible=true;
        }
        if(a==h&&d==e&&b==f&&c==g)
        {
            possible=true;
        }
        if(a==h&&d==e&&b==g&&c==f)
        {
            possible=true;
        }
        if(a==f&&d==g&&b==e&&c==h)
        {
            possible=true;
        }
        if(a==f&&d==g&&b==h&&c==e)
        {
            possible=true;
        }
        if(a==g&&d==f&&b==e&&c==h)
        {
            possible=true;
        }
        if(a==g&&d==f&&b==h&&c==e)
        {
            possible=true;
        }
        if(possible==true)
        {
            //cout<<"1"<<endl;
            cout<<"Case #"<<i+1<<": POSSIBLE"<<endl;
        }
        else
        {
            //cout<<"1"<<endl;
            cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}
