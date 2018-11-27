#include<iostream>
#include<cmath>
int main()
{
    long int n;
    while(std::cin>>n)
    {
        long int N = n;
        bool prime = true;
        bool emirp = true;
        if(n==1||n==0)
        {
            prime = false;
        }
        else
        {
            double doublen = n;
            double rootn = sqrt(doublen);
            for(long int i=2;i<=rootn;i++)
            {
                if(n%i==0)
                {
                    prime = false;
                    break;
                }
            }
            if(prime==true)
            {
                long int reversen = 0;
                while(n!=0)
                {
                    reversen = (reversen*10) + n%10;
                    n/=10;
                }
                doublen = reversen;
                rootn = sqrt(doublen);
                if(N==reversen)
                {
                    emirp = false;
                }
                else
                {
                    for(long int i=2;i<=rootn;i++)
                    {
                        if(reversen%i==0)
                        {
                            emirp = false;
                            break;
                        }
                    }
                }
            }
        }
        if(prime==true&&emirp==true)
        {
            std::cout<<N<<" is emirp."<<std::endl;
        }
        else if(prime==true&&emirp==false)
        {
            std::cout<<N<<" is prime."<<std::endl;
        }
        else
        {
            std::cout<<N<<" is not prime."<<std::endl;
        }
    }
    return 0;
}
