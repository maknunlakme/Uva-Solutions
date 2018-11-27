#include<iostream>
using namespace std;
int main()
{
    int first, last,counter;
    while(1)
    {
        cin>>first;
        cin>>last;
        counter = 0;
        if(first==0&&last==0)
        {
            break;
        }
        if(first>=last)
        {
            while((first/10)>0)
            {
                cout<<first%10<<endl;
                cout<<last%10<<endl;
                if((first%10)+(last%10)>9)
                {
                    cout<<"ok"<<endl;
                    counter++;
                }
                first /=10;
                last /=10;
                cout<<first<<endl;
                cout<<last<<endl;
            }
        }
        else
        {
            while((first%10)>0)
            {
                if((first%10)+(last%10)>9)
                {
                    counter++;
                }
                first %=10;
                last %=10;
            }
        }
        if(counter!=0)
        {
            cout<<counter<<"carry operation."<<endl;
        }
        else if(counter==1)
        {
            cout<<counter<<"carry operation."<<endl;
        }
        else
        {
            cout<<"No carry operations."<<endl;
        }
    }
}
