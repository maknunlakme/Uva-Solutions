#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        bool quadrangle=false;
        bool square=false;
        bool rectangle=false;
        bool banana=false;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0||b==0||c==0||d==0)
        {
            banana=true;
        }
        else if(a>=b&&a>=c&&a>=d)
        {
            if(a<=(b+c+d))
            {
                quadrangle=true;
            }
        }
        else if(b>=a&&b>=c&&b>=d)
        {
            if(b<=(a+c+d))
            {
                quadrangle=true;
            }
        }
        else if(c>=a&&c>=b&&c>=d)
        {
            if(c<=(a+b+d))
            {
                quadrangle=true;
            }
        }
        else if(d>=a&&d>=b&&d>=c)
        {
            if(d<=(a+b+c))
            {
                quadrangle=true;
            }
        }
        if(quadrangle==true)
        {
            if(a==b&&b==c&&c==d)
            {
                square=true;
            }
            else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
            {
                rectangle=true;
            }
        }
        else
        {
            banana=true;
        }
        if(square==true)
        {
            cout<<"square"<<endl;
        }
        else if(rectangle==true)
        {
            cout<<"rectangle"<<endl;
        }
        else if(quadrangle==true)
        {
            cout<<"quadrangle"<<endl;
        }
        else if(banana==true)
        {
            cout<<"banana"<<endl;
        }
    }
    return 0;
}
