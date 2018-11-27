#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    int month,paymonth,i,j;
    double downpay, price,newpercent,worth;
    int months[110];
    double percent[110];
    while(1)
    {
        scanf("%d%lf%lf%d",&month,&downpay,&price,&paymonth);
        if(month<0)
        {
            break;
        }
        for(i=0;i<paymonth;i++)
        {
            scanf("%d%lf",&months[i],&percent[i]);
            cout<<months[i]<<" "<<percent[i]<<endl;
        }
        worth=price;
        for(i=0,j=0;i<month;i++)
        {
            if(months[j]==i)
            {
                newpercent=percent[j];
                j++;
            }
            worth=worth-(worth*newpercent);
            price-=downpay;
            cout<<worth<<" "<<price<<endl;
            cout<<"new :"<<i<<" "<<months[j]<<" "<<newpercent<<endl;
            if(worth>price)
            {
                break;
            }

        }
        if(i==1)
        {
            printf("1 month\n");
        }
        else
        {
            printf("%d months\n",i);
        }
    }
    return 0;
}
