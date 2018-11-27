#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
int main()
{
    char line[2000];
    while(1)
    {
        bool tautogram = true;
        gets(line);
        if(strcmp(line,"*")==0)
        {
            break;
        }
        int length = strlen(line);
        for(int i=0;i<length;i++)
        {
            if(line[i]==' '&&(line[i+1]-line[0])!=0&&std::abs(line[i+1]-line[0])!=32)
            {
                tautogram = false;
                break;
            }
        }
        if(tautogram==true)
        {
            std::cout<<"Y"<<std::endl;
        }
        else
        {
            std::cout<<"N"<<std::endl;
        }

    }
}
