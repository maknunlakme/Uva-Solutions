#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int first,last,number,sum,count_case;
    count_case = 0;
    while(test!=0)
    {
        cin>>first;
        cin>>last;
        if(first%2==0||last%2==0)
        {
            sum = 0;
        }
        else
        {
            number = (last-first+2)/2;
            sum = (number*(first+last))/2;
        }
        count_case++;
        cout<<"Case "<<count_case<<": "<<sum<<endl;
        test--;
    }
    return 0;
}
