#include<iostream>
#include<cstring>
#include<stdio.h>
int main()
{
    char line[20];
    int count_case=0;
    while(gets(line))
    {
        count_case++;
        int length;
        length = strlen(line);
        std::cout<<count_case<<". ";
        switch(length)
        {
            case 1:
                std::cout<<line<<std::endl;
                break;
            case 2:
                std::cout<<line<<std::endl;
                break;
            case 3:
                std::cout<<line[0]<<" shata "<<line[1]<<line[2]<<std::endl;
                break;
            case 4:
                std::cout<<line[0]<<" hajar "<<line[1]<<" shata "<<line[2]<<line[3]<<std::endl;
                break;
            case 5:
                std::cout<<line[0]<<line[1]<<" hajar "<<line[2]<<" shata "<<line[3]<<line[4]<<std::endl;
                break;
            case 6:
                std::cout<<line[0]<<" lakh "<<line[1]<<line[2]<<" hajar "<<line[3]<<" shata "<<line[4]<<line[5]<<std::endl;
                break;
            case 7:
                std::cout<<line[0]<<line[1]<<" lakh "<<line[2]<<line[3]<<" hajar "<<line[4]<<" shata "<<line[5]<<line[6]<<std::endl;
                break;
            case 8:
                std::cout<<line[0]<<" kuti "<<line[1]<<line[2]<<" lakh "<<line[3]<<line[4]<<" hajar "<<line[5]<<" shata "<<line[6]<<line[7]<<std::endl;
                break;
            case 9:
                std::cout<<line[0]<<line[1]<<" kuti "<<line[2]<<line[3]<<" lakh "<<line[4]<<line[5]<<" hajar "<<line[6]<<" shata "<<line[7]<<line[8]<<std::endl;
                break;
            case 10:
                std::cout<<line[0]<<" shata "<<line[1]<<line[2]<<" kuti "<<line[3]<<line[4]<<" lakh "<<line[5]<<line[6]<<" hajar "<<line[7]<<" shata "<<line[8]<<line[9]<<std::endl;
                break;
            case 11:
                std::cout<<line[0]<<" hajar "<<line[1]<<" shata "<<line[2]<<line[3]<<" kuti "<<line[4]<<line[5]<<" lakh "<<line[6]<<line[7]<<" hajar "<<line[8]<<" shata "<<line[9]<<line[10]<<std::endl;
                break;
            case 12:
                std::cout<<line[0]<<line[1]<<" hajar "<<line[2]<<" shata "<<line[3]<<line[4]<<" kuti "<<line[5]<<line[6]<<" lakh "<<line[7]<<line[8]<<" hajar "<<line[9]<<" shata "<<line[10]<<line[11]<<std::endl;
                break;
            case 13:
                std::cout<<line[0]<<" lakh "<<line[1]<<line[2]<<" hajar "<<line[3]<<" shata "<<line[4]<<line[5]<<" kuti "<<line[6]<<line[7]<<" lakh "<<line[8]<<line[9]<<" hajar "<<line[10]<<" shata "<<line[11]<<line[12]<<std::endl;
                break;
            case 14:
                std::cout<<line[0]<<line[1]<<" lakh "<<line[2]<<line[3]<<" hajar "<<line[4]<<" shata "<<line[5]<<line[6]<<" kuti "<<line[7]<<line[8]<<" lakh "<<line[9]<<line[10]<<" hajar "<<line[11]<<" shata "<<line[12]<<line[13]<<std::endl;
                break;
            case 15:
                std::cout<<line[0]<<" kuti "<<line[1]<<line[2]<<" lakh "<<line[3]<<line[4]<<" hajar "<<line[5]<<" shata "<<line[6]<<line[7]<<" kuti "<<line[8]<<line[9]<<" lakh "<<line[10]<<line[11]<<" hajar "<<line[12]<<" shata "<<line[13]<<line[14]<<std::endl;
                break;
        }
    }
    return 0;
}
