#include<iostream>
#include<string>
#include<stdio.h>
int main()
{
    int test;
    std::cin>>test;
    getchar();
    while(test!=0)
    {
        std::string line;
        int length,countm,countf;
        countm=0;
        countf=0;
        getline(std::cin,line);
        length = line.length();
        for(int i=0;i<length;i++)
        {
            if(line[i]=='M')
            {
                countm++;
            }
            else if(line[i]=='F')
            {
                countf++;
            }
        }
        if(countm==countf&&(countf>1&&countm>1))
        {
            std::cout<<"LOOP"<<std::endl;
        }
        else
        {
            std::cout<<"NO LOOP"<<std::endl;
        }
        test--;
    }
    return 0;
}
