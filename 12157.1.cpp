#include<iostream>
using namespace std;
int main()
{
    int test,counter=0;
    cin>>test;
    while(test--)
    {
        int n,mrem,mquo,jrem,jquo,temp,mtotal=0,jtotal=0;
        cin>>n;
        counter++;
        int arr[30];
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            mquo=temp/30;
            mtotal+=(mquo*10)+10;
            jquo=temp/60;
            jtotal+=(jquo*15)+15;
        }
        if(jtotal>mtotal)
        {
            cout<<"Case "<<counter<<": Mile "<<mtotal<<endl;
        }
        else if(jtotal==mtotal)
        {
            cout<<"Case "<<counter<<": Mile Juice "<<jtotal<<endl;
        }
        else
        {
            cout<<"Case "<<counter<<": Juice "<<jtotal<<endl;
        }
    }
    return 0;
}

