#include<iostream>
#define BR 9999.9
using namespace std;
int main()
{
    char temp;
    float x1[20],y1[20],x2[20],y2[20];
    int i=0;
    while(1)
    {
        cin>>temp;
        if(temp=='*')
        {
            break;
        }
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        i++;
    }

    int k=0;
    bool inside;
    float something = 9999.9;
    while(1)
    {
        float x3=0.0,y3=0.0;
        inside=false;
        cin>>x3>>y3;
        if((x3==something&&y3==something))
        {
            break;
        }
        for(int j=0;j<i;j++)
        {
            if(x3>x1[j]&&y3>y2[j]&&x3<x2[j]&&y3<y1[j])
            {
                cout<<"Point "<<k+1<<" is contained in figure "<<j+1<<endl;
                inside=true;
            }
        }
        if(inside==false)
        {
            cout<<"Point "<<k+1<<" is not contained in any figure"<<endl;
        }
        k++;
    }
    return 0;
}

