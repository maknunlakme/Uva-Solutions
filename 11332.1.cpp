#include<iostream>
using namespace std;
int summing(int number)
{
    int temp;
    temp = 0;
    while(number!=0)
    {
        temp += number%10;
        number/=10;
    }
    return temp;
}
int main()
{
    long int number;
    while(1)
    {
        cin>>number;
        if(number==0)
        {
            break;
        }
        while(number>=10)
        {
            number = summing(number);
        }
        cout<<number<<endl;
    }
}
