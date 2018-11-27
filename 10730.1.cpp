#include<iostream>
#include<cstring>
#define X 11000
using namespace std;

int arr[X],mark[X];

int main()
{
    int n,i,j,check;
    bool yes;
    char ch;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        memset(mark,0,sizeof mark);
        cin>>ch;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mark[arr[i]]=i;
        }
        yes=true;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                check=2*arr[j]-arr[i];
                if(check>=0 and check<n)
                {
                    if(mark[check]>j)
                    {
                        yes=false;
                        i=n;
                        break;
                    }
                }
            }
        }
        if(yes==true) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
