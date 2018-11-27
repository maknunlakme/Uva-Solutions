#include<iostream>
using namespace std;
int main()
{
    int test,x,y,divisionx,divisiony,i;
    while(1)
    {
        cin>>test;
        if(test==0)
        {
            break;
        }
        cin>>divisionx;
        cin>>divisiony;
        for(i=0;i<test;i++)
        {
            cin>>x;
            cin>>y;
            if(x==divisionx||y==divisiony)
            {
                cout<<"divisa"<<endl;
            }
            else
            {
                if(divisionx>=0)
                {
                    x -= divisionx;
                }
                else if(divisionx<0)
                {
                    x+= (divisionx*(-1));
                }
                if(divisiony>=0)
                {
                    y -= divisiony;
                }
                else if(divisiony<0)
                {
                    y += (divisiony*(-1));
                }
                if(x>0&&y>0)
                {
                    cout<<"NE"<<endl;
                }
                else if(x>0&&y<0)
                {
                    cout<<"SE"<<endl;
                }
                else if(x<0&&y>0)
                {
                    cout<<"NO"<<endl;
                }
                else if(x<0&&y<0)
                {
                    cout<<"SO"<<endl;
                }
            }

        }
        test--;
    }
    return 0;
}
