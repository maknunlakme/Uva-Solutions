#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test,l,train[60],i,j,temp,swaps;
    std::cin>>test;
    while(test!=0)
    {
        swaps = 0;
        std::cin>>l;
        for(i=0;i<l;i++)
        {
            std::cin>>train[i];
        }
        while(!is_sorted(train,train+l))
        {
            for(j=0;j<(l-1);j++)
            {
                if(train[j]>train[j+1])
                {
                    swap(train[j],train[j+1]);
                    swaps++;
                }
            }
        }
        std::cout<<"Optimal train swapping takes "<<swaps<<" swaps."<<std::endl;
        test--;
    }
    return 0;
}
