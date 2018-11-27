#include<iostream>
using namespace std;
int main()
{
    int first, last,counter,hand,carry;
    while(1)
    {
        cin>>first;
        cin>>last;
        counter = 0;
        carry = 0;
        if(first==0&&last==0)
        {
            break;
        }
        if(first>=last)
        {
            while(first>0)
            {
                hand = (first%10)+(last%10)+carry;
                if(hand>9)
                {
                    carry = hand/10;
                    counter++;
                }
                else
                {
                    carry = 0;
                }
                first /=10;
                last /=10;
            }
        }
        else
        {
            while(last>0)
            {
                hand = (last%10)+(first%10)+carry;
                if(hand>9)
                {
                    carry = hand/10;
                    counter++;
                }
                else
                {
                    carry = 0;
                }
                first /=10;
                last /=10;
            }
        }
        if(counter==1)
        {
            cout<<counter<<" carry operation."<<endl;
        }
        else if(counter!=0)
        {
            cout<<counter<<" carry operations."<<endl;
        }
        else
        {
            cout<<"No carry operation."<<endl;
        }
    }
}
