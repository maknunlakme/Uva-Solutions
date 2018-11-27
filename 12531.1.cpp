#include<iostream>
int main()
{
    int degree;
    while(std::cin>>degree)
    {
        if(degree%6==0)
        {
            std::cout<<"Y"<<std::endl;
        }
        else
        {
            std::cout<<"N"<<std::endl;
        }
    }
    return 0;
}
