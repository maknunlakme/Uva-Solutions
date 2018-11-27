#include<iostream>
#include<cmath>
int main()
{
    int number;
    while(std::cin>>number)
    {
        int temp1,temp2;
        int price[11000];
        for(int i=0;i<number;i++)
        {
            std::cin>>price[i];
        }
        int money;
        std::cin>>money;
        int difference = 5000000;
        for(int i=0;i<number;i++)
        {
            for(int j=i+1;j<number;j++)
            {
                if(price[i]+price[j]==money)
                {
                    if(difference>std::abs(price[i]-price[j]))
                    {
                        temp1 = price[i];
                        temp2 = price[j];
                        difference = std::abs(temp1 - temp2);
                    }
                }
            }
        }
        if(temp1>temp2)
        {
            std::swap(temp1,temp2);
        }
        std::cout<<"Peter should buy books whose prices are "<<temp1<<" and "<<temp2<<"."<<std::endl;
        std::cout<<std::endl;
    }
    return 0;
}
