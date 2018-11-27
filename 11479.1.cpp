#include<iostream>
int main()
{
    int test;
    int count_case=0;
    std::cin>>test;
    while(test!=0)
    {
        long long a,b,c;
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        count_case++;
        if(a+b<=c||a+c<=b||b+c<=a)
        {
            std::cout<<"Case "<<count_case<<": Invalid"<<std::endl;
        }
        else if(a==b&&b==c)
        {
            std::cout<<"Case "<<count_case<<": Equilateral"<<std::endl;
        }
        else if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b))
        {
            std::cout<<"Case "<<count_case<<": Isosceles"<<std::endl;
        }
        else if(a!=b&&a!=c)
        {
            std::cout<<"Case "<<count_case<<": Scalene"<<std::endl;
        }
        test--;
    }
    return 0;
}
