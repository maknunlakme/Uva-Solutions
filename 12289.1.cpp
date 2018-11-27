#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test,check1,check2,check3,i;
    cin>>test;
    char number[10];
    while(test!=0)
    {
        check1 = 0;
        check2 = 0;
        check3 = 0;
        cin>>number;
        for(i=0;i<5;i++)
        {
            if(number[i]=='e')
            {
                if(i==2)
                {
                    check1++;
                }
                else if(i==3||i==4)
                {
                    check3++;
                }
            }
            else if(number[i]=='o')
            {
                if(i==0)
                {
                    check1++;
                }
                else if(i==2)
                {
                    check2++;
                }
            }
            else if(number[i]=='t')
            {
                check2++;
                check3++;
            }
            else if(number[i]=='n')
            {
                check1++;
            }
            else if(number[i]=='w')
            {
                check2++;
            }
            else if(number[i]=='h')
            {
                check3++;
            }
            else if(number[i]=='r')
            {
                check3++;
            }
        }
        if(check1>=2)
        {
            cout<<"1"<<endl;
        }
        else if(check2>=2)
        {
            cout<<"2"<<endl;
        }
        else if(check3>=4)
        {
            cout<<"3"<<endl;
        }
        test--;
    }
    return 0;
}
