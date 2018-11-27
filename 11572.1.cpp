#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>snow;
    int temp,test,n,i,counter,maxi;
    cin>>test;
    while(test--)
    {
        cin>>n;
        counter=0;
        i=0;
        maxi=0;
        snow.clear();
        for(i=1;i<=n;i++)
        {
            cin>>temp;
            if(!snow[temp])
            {
                snow[temp]=i;
            }
            else
            {
                counter=max(snow[temp],counter);
                snow[temp]=i;
            }
            if(maxi<i-counter)
            {
                maxi=i-counter;
            }
            //cout<<temp<<" "<<i<<" "<<counter<<" "<<maxi<<endl;
        }
        cout<<maxi<<endl;
        snow.clear();
    }
    return 0;
}
