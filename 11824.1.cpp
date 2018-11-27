#include<iostream>
#include<algorithm>
int power(int maxi,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return maxi*power(maxi,n-1);
    }
}
int main()
{
    int test;
    std::cin>>test;
    while(test!=0)
    {
        int lands[50];
        int i;
        for(i=0;;i++)
        {
            std::cin>>lands[i];
            if(lands[i]==0)
            {
                break;
            }
        }
        int total=0;
        for(int j=0;j<i;j++)
        {
            int maxi = *std::max_element(lands,lands+i);
            total += 2*power(maxi,j+1);
            if(total>5000000)
            {
                std::cout<<"Too expensive"<<std::endl;
                break;
            }
            //std::cout<<"total :"<<total<<std::endl;
            for(int k=0;k<i;k++)
            {
                if(maxi==lands[k])
                {
                    lands[k]=0;
                    break;
                }
            }
        }
        if(total<=5000000)
        {
            std::cout<<total<<std::endl;
        }
        test--;
    }
    return 0;
}
