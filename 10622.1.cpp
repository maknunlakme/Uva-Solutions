#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    long long n,value,ans,i,blah;
    while(1)
    {
        cin>>n;
        ans=1;
        if(n==0LL) break;
        i=2;
        if(n<0) i++;
        for(;i<40;i++)
        {
            value=round(pow(abs(n),(1.0/i)));
            blah=round(pow(value,i));
            //cerr<<"AA "<<i<<" "<<value<<" "<<blah<<" "<<ans<<endl;
            if(blah==abs(n))
            {
                ans=i;
            }
            if(value==1LL)
            {
                break;
            }
            if(n<0) i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
