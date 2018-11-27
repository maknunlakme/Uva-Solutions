#include<iostream>
using namespace std;

int main()
{
    int test,total;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        cin>>n;
        total=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            total+=arr[i]-brr[i];
        }
        if(total<0) cout<<"Not possible"<<endl;
        else
        {
            total=0;
            for(i=0;i<n;i++)
            {
                while(total>=0)
                {
                    total+=arr[i]-brr[i];
                    j++;
                    if(j==n) break;
                }
            }
        }
    }
    return 0;
}
