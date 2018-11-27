#include<iostream>
int main()
{
    while(1)
    {
        int a,b,c;
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        else if(a>=b&&a>=c)
        {
            if(((b*b)+(c*c))==(a*a))
            {
                std::cout<<"right"<<std::endl;
            }
            else
            {
                std::cout<<"wrong"<<std::endl;
            }
        }
        else if(b>=a&&b>=c)
        {
            if(((a*a)+(c*c))==(b*b))
            {
                std::cout<<"right"<<std::endl;
            }
            else
            {
                std::cout<<"wrong"<<std::endl;
            }
        }
        else if(c>=b&&c>=a)
        {
            if(((b*b)+(a*a))==(c*c))
            {
                std::cout<<"right"<<std::endl;
            }
            else
            {
                std::cout<<"wrong"<<std::endl;
            }
        }
    }
    return 0;
}
