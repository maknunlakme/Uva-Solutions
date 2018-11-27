#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,arr[100],counter,i,j,loop;
    while(cin>>n)
    {
        counter=0;
        loop=0;
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                loop++;
                if(__gcd(arr[i],arr[j])==1)
                {
                    counter++;
                }
            }
        }
        if(counter==0)
        {
            cout<<"No estimate for this data set."<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(6)<<sqrt(6.0/((counter*1.0)/loop))<<endl;
        }
        //cout<<"counter "<<counter<<" "<<loop<<endl;
    }
    return 0;
}
