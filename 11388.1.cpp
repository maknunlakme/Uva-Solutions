#include<iostream>
int main()
{
    int test;
    std::cin>>test;
    while(test!=0)
    {
        int a,b;
        std::cin>>a;
        std::cin>>b;
        if(b%a==0)
        {
            std::cout<<a<<" "<<b<<std::endl;
        }
        else
        {
            std::cout<<"-1"<<std::endl;
        }
        test--;
    }
    return 0;
}
