#include<iostream>
int main()
{
    int r,n,count_case;
    count_case=0;
    while(1)
    {
        std::cin>>r;
        std::cin>>n;
        count_case++;
        if(r==0&&n==0)
        {
            break;
        }
        else if(n*27<r)
        {
            std::cout<<"Case "<<count_case<<": impossible"<<std::endl;
        }
        else if(n>=r)
        {
            std::cout<<"Case "<<count_case<<": 0"<<std::endl;
        }
        else if(((r-n)%n)==0)
        {
            std::cout<<"Case "<<count_case<<": "<<(r - n) / n<<std::endl;
        }
        else if(((r-n)%n)!=0)
        {
            std::cout<<"Case "<<count_case<<": "<<((r - n) / n) + 1<<std::endl;
        }
    }
}
