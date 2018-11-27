#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int month,depreciation,monthno[120],i,j,newmonth=0;
        float downpay,carprice,worth,percent[120],newpercent=0.0;
        cin>>month;
        if(month<0)
        {
            cin>>downpay>>carprice>>depreciation;
            break;
        }
        cin>>downpay>>carprice>>depreciation;
        worth=carprice+downpay;
        for(i=0;i<depreciation;i++)
        {
            cin>>monthno[i]>>percent[i];
        }
        i=0;
        j=0;
        carprice=worth;
        do
        {
            if(monthno[j]<=i)
            {
                newpercent=percent[j];
                j++;
            }
            worth=worth-(worth*newpercent);
            carprice-=downpay;
            cout<<worth<<" "<<carprice<<endl;
            cout<<"new :"<<newmonth<<" "<<newpercent<<endl;

            i++;
        }
        while(worth<carprice);
        cout<<"month : "<<i-1<<endl;
    }
    return 0;
}
