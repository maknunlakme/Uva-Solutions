#include<iostream>
#include<algorithm>
int main()
{
    int test;
    std::cin>>test;
    while(test!=0)
    {
        int items,i;
        long long discount=0;
        std::cin>>items;
        int price[20100];
        for(i=0;i<items;i++)
        {
            std::cin>>price[i];
        }
        std::sort(price,price+i);
        std::reverse(price,price+i);
        for(int j=0;j<i;j++)
        {
            if((j+1)%3==0)
            {
                discount += price[j];
            }
        }
        std::cout<<discount<<std::endl;
        test--;
    }
    return 0;
}
