#include<iostream>
#include<cstring>
int main()
{
    long long I;
    while(std::cin>>I)
    {
        if(I==0)
        {
            break;
        }
        long long temp,count_1;
        char B[500] = {'\0'};
        count_1=0;
        for(int i=0;I!=0;i++)
        {
            temp=I%2;
            I/=2;
            B[i]=48+temp;
        }
        int length = strlen(B);
        for(int i=0;i<length;i++)
        {
            if(B[i]=='1')
            {
                count_1++;
            }
        }
        char B_reverse[500];
        int i = length-1;
        int j;
        for(j=0;i>-1;i--,j++)
        {
            B_reverse[j]=B[i];
        }
        B_reverse[j]='\0';
        std::cout<<"The parity of "<<B_reverse<<" is "<<count_1<<" (mod 2)."<<std::endl;

    }
    return 0;
}
