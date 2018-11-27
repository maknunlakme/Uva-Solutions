#include<iostream>
int main()
{
    int a,b,c;
    while(std::cin>>a&&std::cin>>b&&std::cin>>c)
    {
        if(a==b&&a==c)
        {
            std::cout<<"*"<<std::endl;
        }
        else if(a==b&&a!=c)
        {
            std::cout<<"C"<<std::endl;
        }
        else if(b==c&&b!=a)
        {
            std::cout<<"A"<<std::endl;
        }
        else if(a==c&&a!=b)
        {
            std::cout<<"B"<<std::endl;
        }
    }
    return 0;
}
