#include<iostream>
using namespace std;
int divide_2(int temp)
{
    while(temp%2==0)
    {
        temp/=2;
        if(temp%200==0)
        {
            temp/=200;
        }
    }
    return temp;
}
int divide_3(int temp)
{
    while(temp%3==0)
    {
        temp/=3;
        if(temp%300==0)
        {
            temp/=300;
        }
    }
    return temp;
}
int divide_5(int temp)
{
    while(temp%5==0)
    {
        temp/=5;
        if(temp%500==0)
        {
            temp/=500;
        }
    }
    return temp;
}
int main()
{
    int n,i,count_ugly,temp;
    n = 2;
    count_ugly = 1;
    while(count_ugly<1500)
    {
        temp = divide_2(n);
        temp = divide_3(temp);
        temp = divide_5(temp);
        if(temp==1)
        {
            cout<<n<<endl;
            count_ugly++;
        }
        n++;
    }
    cout<<"The 1500'th ugly number is "<<n-1<<"."<<endl;

    return 0;
}
