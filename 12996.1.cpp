#include<iostream>
using namespace std;
int main()
{
    int test,mango,limit,type[20],limittype[20],total,i,j;
    bool no;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>mango>>limit;
        total=0;
        no=false;
        for(j=0;j<mango;j++)
        {
            cin>>type[j];
            total+=type[j];
        }
        if(total>limit)
        {
            no=true;
        }
        for(j=0;j<mango;j++)
        {
            cin>>limittype[j];
            if(type[j]>limittype[j])
            {
                no=true;
            }
        }
        if(no==true)
        {
            cout<<"Case "<<i+1<<": No"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
    }
    return 0;
}
