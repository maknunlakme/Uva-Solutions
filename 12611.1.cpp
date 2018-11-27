#include<iostream>
int main()
{
    int test,count_case;
    count_case=0;
    std::cin>>test;
    while(test!=0)
    {
        int radius,a,b;
        std::cin>>radius;
        count_case++;
        a = radius*2.25;
        a = (-a);
        b = radius*1.5;
        std::cout<<"Case "<<count_case<<":"<<std::endl;
        std::cout<<a<<" "<<b<<std::endl;
        a = radius*2.75;
        std::cout<<a<<" "<<b<<std::endl;
        b = (-b);
        std::cout<<a<<" "<<b<<std::endl;
        a = radius*2.25;
        a = (-a);
        std::cout<<a<<" "<<b<<std::endl;
        test--;
    }
    return 0;
}
