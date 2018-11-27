#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        bool inside=false;
        double xstart,ystart,xend,yend,xleft,ytop,xright,ybottom;
        cin>>xstart>>ystart>>xend>>yend>>xleft>>ytop>>xright>>ybottom;
        if(xleft<=xstart&&xright>=xstart&&ybottom<=ystart&&ytop>=ystart)
        {
            inside=true;
        }
        else if(xleft<=xend&&xright>=xend&&ybottom<=yend&&ytop>=yend)
        {
            inside=true;
        }
        else
        {
            double a1,b1,c1,a2,b2,c2,a,b,c;
            a1=ystart-yend;
            b1=(-1)*(xstart-xend);
            c1=(ystart-yend)*((-1)*xstart)+(-1)*(xstart-xend)*((-1)*ystart);
            a2=0;
            b2=(-1)*(xleft-xright);
            c2=(xleft-xright)*((-1)*ytop);
            c=(a1*b2)-(a2*b1);
            a=((b1*c2)-(b2*c1))/c;
            b=((-1)*((a1*c2)-(a2*c1)))/c;
            if(xleft<=a&&ybottom<=b&&xright>=a&&ytop>=b)
            {
                inside=true;
            }
            if(inside==false)
            {
                a2=0;
                b2=(-1)*(xleft-xright);
                c2=(xleft-xright)*((-1)*ybottom);
                c=(a1*b2)-(a2*b1);
                a=((b1*c2)-(b2*c1))/c;
                b=((-1)*((a1*c2)-(a2*c1)))/c;
                if(xleft<=a&&ybottom<=b&&xright>=a&&ytop>=b)
                {
                    inside=true;
                }
                if(inside==false)
                {
                    a2=ytop-ybottom;
                    b2=0;
                    c2=(ytop-ybottom)*((-1)*xleft);
                    c=(a1*b2)-(a2*b1);
                    a=((b1*c2)-(b2*c1))/c;
                    b=((-1)*((a1*c2)-(a2*c1)))/c;
                    if(xleft<=a&&ybottom<=b&&xright>=a&&ytop>=b)
                    {
                        inside=true;
                    }
                    if(inside==false)
                    {
                        a2=ytop-ybottom;
                        b2=0;
                        c2=(ytop-ybottom)*((-1)*xright);
                        c=(a1*b2)-(a2*b1);
                        a=((b1*c2)-(b2*c1))/c;
                        b=((-1)*((a1*c2)-(a2*c1)))/c;
                        if(xleft<=a&&ybottom<=b&&xright>=a&&ytop>=b)
                        {
                            inside=true;
                        }
                    }
                }
            }
        }
        if(inside==true)
        {
            cout<<"T"<<endl;
        }
        else
        {
            cout<<"F"<<endl;
        }
    }
    return 0;
}
