#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int test,student,total,i,counter;
    float average;
    cin>>test;
    int grade[1100];
    while(test!=0)
    {
        cin>>student;
        total = 0;
        counter = 0;
        for(i=0;i<student;i++)
        {
            cin>>grade[i];
            total += grade[i];
        }
        total/=student;
        for(i=0;i<student;i++)
        {
            if(total<grade[i])
            {
                counter++;
            }
        }
        average = static_cast<float>(counter)/static_cast<float>(student);
        cout<<fixed<<setprecision(3)<<average*100<<"%"<<endl;
        test--;
    }
    return 0;
}
