#include<iostream>
int mpower(int b,int p,int m)
{
    if(p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
        return ((mpower(b,(p/2),m)*mpower(b,(p/2),m))%m);
    }
    else
    {
        return ((((mpower(b,(p/2),m)*mpower(b,(p/2),m))%m)*(b%m))%m);
    }
}
int main()
{
    long long b,p,m;
    while(std::cin>>b&&std::cin>>p&&std::cin>>m)
    {
        std::cout<<mpower(b,p,m)<<std::endl;
    }
    return 0;
}

