#include<iostream>
using namespace std;
int main()
{
    int x[5],y[5],i,j;
    bool yes;
    while(cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4])
    {
        yes=true;
        cin>>y[0]>>y[1]>>y[2]>>y[3]>>y[4];
        for(i=0;i<5;i++)
        {
            if(x[i]==y[i])
            {
                yes=false;
            }
        }
        if(yes==true)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
    return 0;
}
