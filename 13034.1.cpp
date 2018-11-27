#include<iostream>
using namespace std;
int main()
{
    int test,i,j,temp;
    bool no;
    cin>>test;
    for(i=0;i<test;i++)
    {
        no=false;
        for(j=0;j<13;j++)
        {
            cin>>temp;
            if(temp<1)
            {
                no=true;
            }
        }
        if(no==true)
        {
            cout<<"Set #"<<i+1<<": "<<"No"<<endl;
        }
        else
        {
            cout<<"Set #"<<i+1<<": "<<"Yes"<<endl;
        }
    }
    return 0;
}
