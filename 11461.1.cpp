#include<iostream>
int main()
{
    int a,b;
    while(1)
    {
        int count_square=0;
        std::cin>>a;
        std::cin>>b;
        if(a==0&&b==0)
        {
            break;
        }
        for(int i=1;i<b;i++)
        {
            if((i*i<=b)&&(i*i>=a))
            {
                count_square++;
            }
            else if(i*i>b)
            {
                break;
            }
        }
        std::cout<<count_square<<std::endl;
    }
}
