#include<iostream>
int GCD(int i,int j)
{
    if(i==0)
    {
        return j;
    }
    else
    {
        GCD(j%i,i);
    }
}
int main()
{
    int N,G;
    while(1)
    {
        std::cin>>N;
        if(N==0)
        {
            break;
        }
        G=0;
        for(int i=1;i<N;i++)
        {
            for(int j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        std::cout<<G<<std::endl;
    }
    return 0;
}
