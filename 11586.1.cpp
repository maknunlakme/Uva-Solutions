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
        bool loop;
        loop = true;
        std::string line;
        int length;
        getline(std::cin,line);
        length = line.length();
        int count_erase=0;
        for(int i=0;i<length;i++)
        {
            if(line[i]==' '&&line[i+1]==' ')
            {
                line.erase(i,1);
                i--;
                length--;
            }
        }
        for(int i=0;i<length-1;i++)
        {
            if(line[i]==' ')
            {
                if(line[i-1]=='M'&&line[i+1]=='M')
                {
                    loop = false;
                }
                else if(line[i-1]=='F'&&line[i+1]=='F')
                {
                    loop = false;
                }
            }
        }
        if(loop==true)
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
