#include<iostream>
using namespace std;
int main()
{
    long long int number;
    while(cin>>number)
    {
        long long int row = ((number-1)/2)+1;
        long long int digit = (row*row);
        long long int sum =  (digit*digit) - ((digit-3)*(digit-3));
        cout<<sum<<endl;
    }
    return 0;
}
