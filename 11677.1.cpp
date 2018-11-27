#include<iostream>
int main()
{
    int h1,h2,m1,m2,total;
    while(1)
    {
        std::cin>>h1;
        std::cin>>m1;
        std::cin>>h2;
        std::cin>>m2;
        if(h1==0&&h2==0&&m1==0&&m2==0)
        {
            break;
        }
        else
        {
            if(h2==0)
            {
                h2=24;
            }
            total = ((h2-h1)*60) + (m2-m1);
            if(total<0)
            {
                total = 1440+total;
            }
            std::cout<<total<<std::endl;
        }
    }
    return 0;
}
