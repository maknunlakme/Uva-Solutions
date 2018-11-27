#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int rem[4],j;
        int add=0;
        for(int i=n;i<=m;i++)
        {
            bool counting = true;
            int temp=i;
            for(j=0;temp>0;j++)
            {
                rem[j]=temp%10;
                //cout<<"i "<<temp<<endl;
                //cout<<"rem "<<rem[j]<<endl;
                temp/=10;
                //cout<<"I "<<temp<<endl;
            }
            int digit = j;
            for(int j=0;j<digit;j++)
            {
                for(int k=j+1;k<digit;k++)
                {
                    //cout<<"J "<<rem[j]<<" K "<<rem[k]<<endl;
                    if(rem[j]==rem[k])
                    {
                        counting = false;
                    }
                }
            }
            if(counting==true)
            {
                add++;
            }
        }
        cout<<add<<endl;
    }
    return 0;
}
