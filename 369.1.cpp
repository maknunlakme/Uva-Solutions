#include<iostream>
int combination(long long unsigned int n, long long unsigned int temp)
{
    if(n==temp)
    {
        return 1;
    }
    else
    {
        return n*combination(n-1,temp);
    }
}
int factorial(long long unsigned int m)
{
    if(m==0)
    {
        return 1;
    }
    else
    {
        return m*factorial(m-1);
    }
}
int main()
{
    long long unsigned int n,m;
    while(1)
    {
        std::cin>>n;
        std::cin>>m;
        if(n==0&&m==0)
        {
            break;
        }
        long long unsigned int temp = n-m;
        long long unsigned int total = n*combination(n-1,temp);
        std::cout<<total<<std::endl;
        long long unsigned int factm = m*factorial(m-1);
        total /=factm;
        std::cout<<factm<<std::endl;
        std::cout<<total<<std::endl;
    }
}
