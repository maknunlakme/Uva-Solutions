#include<iostream>
#include<algorithm>
int main()
{
    int n;
    while(std::cin>>n)
    {
        int jolly[3100];
        int difference[3100];
        bool isjolly = true;
        for(int i=0;i<n;i++)
        {
            std::cin>>jolly[i];
        }
        for(int i=0;i<(n-1);i++)
        {
            difference[i]=abs(jolly[i]-jolly[i+1]);
        }
        std::sort(difference,difference+n-1);
        for(int i=0;i<(n-1);i++)
        {
            if(difference[i]!=(i+1))
            {
                isjolly = false;
            }
        }
        if(isjolly==true)
        {
            std::cout<<"Jolly"<<std::endl;
        }
        else
        {
            std::cout<<"Not jolly"<<std::endl;
        }
    }
    return 0;
}

