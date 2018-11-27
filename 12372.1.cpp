#include<iostream>
using namespace std;
int main()
{
    int test,count_case;
    cin>>test;
    int length,width,height;
    count_case = 0;
    while(test!=0)
    {
        cin>>length;
        cin>>width;
        cin>>height;
        count_case++;
        if(length>20||width>20||height>20)
        {
            cout<<"Case "<<count_case<<": bad"<<endl;
        }
        else
        {
            cout<<"Case "<<count_case<<": good"<<endl;
        }
        test--;
    }
    return 0;
}
