#include<iostream>
#include<iomanip>
int main()
{
    int test;
    int count_case =0;
    std::cin>>test;
    while(test!=0)
    {
        float c,f1,f2,f;
        std::cin>>c;
        std::cin>>f1;
        count_case++;
        f2 = ((1.8*c)+32);
        f = f1+f2;
        //std::cout<<f1<<" "<<f2<<" "<<f<<" "<<c<<std::endl;
        std::cout<<std::fixed<<std::setprecision(2)<<"Case "<<count_case<<": "<<((5*(f-32))/9)<<std::endl;
        test--;
    }
    return 0;
}
