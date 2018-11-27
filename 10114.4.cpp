#include<iostream>
using namespace std;

double no[120],percent[120];

int main()
{
    int n,i;
    double month,pay,price,drop,counter,multi;
    bool breaking;
    while(cin>>month>>pay>>price>>n)
    {
        if(month<0) break;
        for(i=0; i<n; i++) cin>>no[i]>>percent[i];
        drop=price+pay;
        pay=price/month;
        counter=0;
        breaking=false;
        month++;
        for(i=0; i<n; i++)
        {
            while(counter!=no[i])
            {
                counter++;
                if(counter!=1) price-=pay;
                drop=drop-(drop*multi);
                //cerr<<"AA "<<counter<<" "<<price<<" "<<drop<<" "<<multi<<endl;
                if(price<drop)
                {
                    breaking=true;
                    break;
                }
            }
            if(breaking==false)
            {
                counter++;
                if(counter!=1) price-=pay;
                multi=percent[i];
                drop=drop-(drop*multi);
                //cerr<<"BB "<<counter<<" "<<price<<" "<<drop<<" "<<multi<<endl;
                if(price<drop)
                {
                    breaking=true;
                    break;
                }
            }
        }
        if(breaking==false)
        {
            while(counter<month)
            {
                counter++;
                if(counter!=1) price-=pay;
                drop=drop-(drop*multi);
                //cerr<<"CC "<<counter<<" "<<price<<" "<<drop<<" "<<multi<<endl;
                if(price<drop) break;
            }
        }
        counter--;
        if(counter==1) cout<<"1 month"<<endl;
        else cout<<counter<<" months"<<endl;
    }
    return 0;
}
