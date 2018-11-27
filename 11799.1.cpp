#include<iostream>
using namespace std;
int main()
{
    int test, number, student, maxi, counter;
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        maxi = 0;
        cin>>number;
        while(number!=0)
        {
            cin>>student;
            if(maxi<student)
            {
                maxi = student;
            }
            number--;
        }
        counter++;
        cout<<"Case "<<counter<<": "<<maxi<<endl;
        test--;
    }
    return 0;
}
