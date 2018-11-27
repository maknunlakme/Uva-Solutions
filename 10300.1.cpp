#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int test_case, farmers,i,j,size,animals,environment,money, total_money[20];
    money = 0;
    cin>>test_case;
    for(i=0;i<test_case;i++)
    {
        cin>>farmers;
        for(j=0;j<farmers;j++)
        {
            cin>>size;
            cin>>animals;
            cin>>environment;
            money += size*environment;
        }
        total_money[i] = money;
        money = 0;
    }
    for(i=0;i<test_case;i++)
    {
        cout<<total_money[i]<<endl;
    }
    return 0;
}
