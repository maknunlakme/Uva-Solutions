#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<long long int>n;
    for(int i=0;i<10001000;i++)
    {
        long long int ntemp;
        ntemp=(i*(i+1))/2;
        n.push_back(ntemp);
        //cout<<n[i]<<" "<<i<<endl;
    }
    long long int s,d,result;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        //cout<<"working 1"<<endl;
        long long int temp=d;

        while(1)
        {
            //cout<<n[temp]<<" "<<n[s-1]<<" "<<n[temp]-n[s-1]<<endl;
            if((d<=(n[temp]-n[s-1]))&&(d>=(n[temp-1]-n[s-1])))
            {
                //cout<<"working 2"<<endl;
                break;
            }
            else
            {
                //cout<<"working 3"<<endl;
                temp--;
            }

        }
        cout<<temp<<endl;
    }
}
