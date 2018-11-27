#include<iostream>
using namespace std;
int main()
{
    int test,i,jack[10],counter;
    bool order;
    int cases[25] = {0};
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        order = true;
        for(i=0;i<10;i++)
        {
            cin>>jack[i];
        }
        if(jack[0]>jack[1])
        {
            for(i=0;i<9;i++)
            {
                if(jack[i]<jack[i+1])
                {
                    order = false;
                }
            }
        }
        else if(jack[0]<jack[1])
        {
            for(i=0;i<9;i++)
            {
                if(jack[i]>jack[i+1])
                {
                    order = false;
                }
            }
        }
        if(order==true)
        {
            cases[counter] = 1;
        }
        test--;
        counter++;
    }
    cout<<"Lumberjacks:"<<endl;
    for(i=0;i<counter;i++)
    {
        if(cases[i]==1)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }
    }
    return 0;
}
