#include<iostream>
int main()
{
    int n,count_case,paste,total;
    count_case = 0;
    while(1)
    {
        total = 0;
        std::cin>>n;
        if(n<0)
        {
            break;
        }
        paste = 1;
        while(paste<n)
        {
            paste*=2;
            total++;
        }
        count_case++;
        std::cout<<"Case "<<count_case<<": "<<total<<std::endl;
    }
    return 0;
}
