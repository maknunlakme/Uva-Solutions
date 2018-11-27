#include<iostream>
int main()
{
    int test,count_case;
    count_case = 0;
    std::cin>>test;
    while(test!=0)
    {
        int term1,term2,term3,attendence,classtest1,classtest2,classtest3,classtest,total;
        std::cin>>term1;
        std::cin>>term2;
        std::cin>>term3;
        std::cin>>attendence;
        std::cin>>classtest1;
        std::cin>>classtest2;
        std::cin>>classtest3;
        count_case++;
        if(classtest1<=classtest2&&classtest1<=classtest3)
        {
            classtest = (classtest2+classtest3)/2;
        }
        else if(classtest2<=classtest1&&classtest2<=classtest3)
        {
            classtest = (classtest1+classtest3)/2;
        }
        else if(classtest3<=classtest2&&classtest3<=classtest1)
        {
            classtest = (classtest1+classtest2)/2;
        }
        total = term1+term2+term3+attendence+classtest;
        if(total>=90)
        {
            std::cout<<"Case "<<count_case<<": A"<<std::endl;
        }
        else if(total>=80)
        {
            std::cout<<"Case "<<count_case<<": B"<<std::endl;
        }
        else if(total>=70)
        {
            std::cout<<"Case "<<count_case<<": C"<<std::endl;
        }
        else if(total>=60)
        {
            std::cout<<"Case "<<count_case<<": D"<<std::endl;
        }
        else
        {
            std::cout<<"Case "<<count_case<<": F"<<std::endl;
        }

        test--;
    }
    return 0;
}
