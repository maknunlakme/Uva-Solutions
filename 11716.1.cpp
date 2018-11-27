#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
int main()
{
    int test;
    std::cin>>test;
    getchar();
    while(test!=0)
    {
        double length;
        double squareroot;
        bool ok = false;
        std::string line;
        getline(std::cin,line);
        length = line.length();
        squareroot = sqrt(length);
        ok = squareroot == (int)squareroot;
        int loop = static_cast<int>(squareroot);
        int i,j;
        if(ok==true)
        {
            for(i=0;i<loop;i++)
            {
                for(j=i;j<length;j=j+loop)
                {
                    std::cout<<line[j];
                }
            }
            std::cout<<std::endl;
        }
        else
        {
            std::cout<<"INVALID"<<std::endl;
        }
        test--;
    }
    return 0;
}
