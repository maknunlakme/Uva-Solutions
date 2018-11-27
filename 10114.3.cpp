#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int month,record,month_no[120],i,j;
    double downpay,amount,owe,carvalue,percent[120],prev;
    while(1)
    {
        cin>>month>>downpay>>amount>>record;
        if(month<0)
        {
            break;
        }
        carvalue=downpay+amount;
        owe=carvalue;
        for(i=0;i<record;i++)
        {
            cin>>month_no[i]>>percent[i];
        }
        for(i=0,j=0;i<month;i++)
        {
            if(i==month_no[j])
            {
                prev=percent[j];
                j++;
            }
            owe-=downpay;
            carvalue=carvalue-(carvalue*prev);
            printf("%f %f %f\n",owe,carvalue,prev);
            //cout<<owe<<" "<<carvalue<<" "<<prev<<endl;
            if(carvalue>owe)
            {
                break;
            }
        }
        cout<<"month "<<i<<endl;
    }
    return 0;
}
