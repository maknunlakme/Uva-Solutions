#include<iostream>
using namespace std;

void Insert(int gp, int p)
{

}
int main()
{
    int m,n,lm,ln,rm,rn,mm,mn;
    while(1)
    {
        cin>>m>>n;
        if(m==1&&n==1)
        {
            break;
        }
        lm=0;
        ln=1;
        rm=1;
        rn=0;
        while(1)
        {
            mm=lm+rm;
            mn=ln+rn;
            if(m==mm&&n==mn)
            {
                break;
            }
            else
            {
                if(mm*n>mn*m)
                {
                    cout<<"L";
                    rm=mm;
                    rn=mn;
                }
                else
                {
                    cout<<"R";
                    lm=mm;
                    ln=mn;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
