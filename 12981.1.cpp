#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,test,i;
    bool impossible;
    cin>>test;
    for(i=0;i<test;i++)
    {
        impossible=false;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        if(a==e&&d!=h)
        {
            cout<<"1 "<<a<<" "<<e<<" "<<d<<" "<<h<<endl;
            impossible=true;
        }
        if(a==f&&d!=g)
        {
            cout<<"2"<<endl;
            impossible=true;
        }
        if(a==g&&d!=f)
        {
            cout<<"3"<<endl;
            impossible=true;
        }
        if(a==h&&d!=e)
        {
            cout<<"4"<<endl;
            impossible=true;
        }
        if(b==e&&c!=h)
        {
            cout<<"5"<<endl;
            impossible=true;
        }
        else if(b==f&&c!=g)
        {
            cout<<"6"<<endl;
            impossible=true;
        }
        if(b==g&&c!=f)
        {
            cout<<"7"<<endl;
            impossible=true;
        }
        if(b==h&&c!=e)
        {
            cout<<"8"<<endl;
            impossible=true;
        }
        if(c==e&&b!=h)
        {
            cout<<"9"<<endl;
            impossible=true;
        }
        if(c==f&&b!=g)
        {
            cout<<"10"<<endl;
            impossible=true;
        }
        if(c==g&&b!=f)
        {
            cout<<"11"<<endl;
            impossible=true;
        }
        if(c==h&&b!=e)
        {
            cout<<"12"<<endl;
            impossible=true;
        }
        if(d==e&&a!=h)
        {
            cout<<"13"<<endl;
            impossible=true;
        }
        if(d==f&&a!=g)
        {
            cout<<"14"<<endl;
            impossible=true;
        }
        if(d==g&&a!=f)
        {
            cout<<"15"<<endl;
            impossible=true;
        }
        if(d==h&&a!=e)
        {
            cout<<"16"<<endl;
            impossible=true;
        }
        if(impossible==true)
        {
            //cout<<"1"<<endl;
            cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
            cout<<"Case #"<<i+1<<": POSSIBLE"<<endl;
        }
    }
    return 0;
}