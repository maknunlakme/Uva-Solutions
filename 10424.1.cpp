#include<iostream>
#include<iomanip>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    char name1[30],name2[30];
    int i,j,length,sum1,sum2;
    float total;
    while(gets(name1))
    {
        fflush(stdin);
        gets(name2);
        fflush(stdin);
        sum1 = 0;
        sum2 = 0;
        total = 0;
        length = strlen(name1);
        for(i=0;i<length;i++)
        {
            if(name1[i]>='A'&&name1[i]<='Z')
            {
                sum1 += (name1[i] - 64);
            }
            else if(name1[i]>='a'&&name1[i]<='z')
            {
                sum1 += (name1[i] - 96);
            }
        }
        while(sum1>9)
        {
            sum1 = (sum1/10) + (sum1%10);
        }
        length = strlen(name2);
        for(i=0;i<length;i++)
        {
            if(name2[i]>='A'&&name2[i]<='Z')
            {
                sum2 += (name2[i] - 64);
            }
            else if(name2[i]>='a'&&name2[i]<='z')
            {
                sum2 += (name2[i] - 96);
            }
        }
        while(sum2>9)
        {
            sum2 = (sum2/10) + (sum2%10);
        }
        if(sum1!=0&&sum2!=0&&sum1>sum2)
        {
            total = ((static_cast<float>(sum2))/(static_cast<float>(sum1)))*100;
        }
        else if(sum1!=0&&sum2!=0&&sum1<=sum2)
        {
            total = ((static_cast<float>(sum1))/(static_cast<float>(sum2)))*100;
        }
        cout<<fixed<<setprecision(2)<<total<<" %"<<endl;
    }
    return 0;
}
