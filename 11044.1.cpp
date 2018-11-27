#include<iostream>
int main()
{
    int test;
    std::cin>>test;
    while(test!=0)
    {
        int n,m;
        std::cin>>n;
        std::cin>>m;
        n-=2;
        m-=2;
        if(n%3==0)
        {
            n/=3;
        }
        else
        {
            n/=3;
            n++;
        }
        if(m%3==0)
        {
            m/=3;
        }
        else
        {
            m/=3;
            m++;
        }
        std::cout<<m*n<<std::endl;
        test--;
    }
    return 0;
}
