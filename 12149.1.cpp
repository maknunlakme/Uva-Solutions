#include<iostream>
int main()
{
    int n;
    while(1)
    {
        std::cin>>n;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            std::cout<<"1"<<std::endl;
        }
        else if(n==2)
        {
            std::cout<<"5"<<std::endl;
        }
        else
        {
            int total = 5;
            for(int i=3;i<=n;i++)
            {
                total += (i*i);
            }
            std::cout<<total<<std::endl;
        }
    }
    return 0;
}
