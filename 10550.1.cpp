#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,temp,degree;
    while(1)
    {
        cin>>n1>>n2>>n3>>n4;
        if(n1==0&&n2==0&&n3==0&&n4==0)
        {
            break;
        }
        degree=1080;
        temp=n1-n2;
        if(temp<0)
        {
            temp+=40;
        }
        degree+=temp*9;
        temp=n3-n2;
        if(temp<0)
        {
            temp+=40;
        }
        degree+=temp*9;
        temp=n3-n4;
        if(temp<0)
        {
            temp+=40;
        }
        degree+=temp*9;
        cout<<degree<<endl;
    }
}
