#include<iostream>
int main()
{
    int test;
    std::cin>>test;
    int count_case = 0;
    while(test!=0)
    {
        char today[15];
        char birth[15];
        std::cin>>today;
        std::cin>>birth;
        count_case++;
        int DD,MM,YYYY,dd,mm,yyyy;
        DD = ((today[0] - '0')*10) + (today[1] - '0');
        MM = ((today[3] - '0')*10) + (today[4] - '0');
        YYYY = ((today[6] - '0')*1000) + ((today[7] - '0')*100) + ((today[8] - '0')*10) + (today[9] - '0');
        dd = ((birth[0] - '0')*10) + (birth[1] - '0');
        mm = ((birth[3] - '0')*10) + (birth[4] - '0');
        yyyy = ((birth[6] - '0')*1000) + ((birth[7] - '0')*100) + ((birth[8] - '0')*10) + (birth[9] - '0');
        if((YYYY-yyyy)>131)
        {
            std::cout<<"Case #"<<count_case<<": Check birth date"<<std::endl;
        }
        else if(YYYY<yyyy)
        {
            std::cout<<"Case #"<<count_case<<": Invalid birth date"<<std::endl;
        }
        else if(YYYY>yyyy)
        {
            if(MM>mm)
            {
                if((YYYY-yyyy)==131)
                {
                    std::cout<<"Case #"<<count_case<<": Check birth date"<<std::endl;
                }
                else
                {
                    std::cout<<"Case #"<<count_case<<": "<<YYYY-yyyy<<std::endl;
                }
            }
            else if(MM==mm)
            {
                if(DD>=dd)
                {
                    if((YYYY-yyyy)==131)
                    {
                        std::cout<<"Case #"<<count_case<<": Check birth date"<<std::endl;
                    }
                    else
                    {
                        std::cout<<"Case #"<<count_case<<": "<<YYYY-yyyy<<std::endl;
                    }
                }
                else if(DD<dd)
                {
                    std::cout<<"Case #"<<count_case<<": "<<(YYYY-yyyy)-1<<std::endl;
                }
            }
            else if(MM<mm)
            {
                std::cout<<"Case #"<<count_case<<": "<<(YYYY-yyyy)-1<<std::endl;
            }
            else
            {
                std::cout<<"Case #"<<count_case<<": "<<YYYY-yyyy<<std::endl;
            }
        }
        else if(YYYY==yyyy)
        {
            if(MM>mm)
            {
                std::cout<<"Case #"<<count_case<<": "<<YYYY-yyyy<<std::endl;
            }
            else if(MM<mm)
            {
                std::cout<<"Case #"<<count_case<<": Invalid birth date"<<std::endl;
            }
            else if(MM==mm)
            {
                if(DD>=dd)
                {
                    std::cout<<"Case #"<<count_case<<": "<<YYYY-yyyy<<std::endl;
                }
                else if(DD<dd)
                {
                    std::cout<<"Case #"<<count_case<<": Invalid birth date"<<std::endl;
                }
            }
        }
        test--;
    }
}
