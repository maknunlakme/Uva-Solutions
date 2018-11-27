#include<iostream>
using namespace std;
int main()
{
    int test,first,last;
    int sum[110] = {0};
    int i,j;
    j = 0;
    cin>>test;
    while(test!=0)
    {
        cin>>first;
        cin>>last;
        for(;first<=last;first++)
        {
            if(first%2!=0)
            {
                sum[j]+=first;
            }
        }
        j++;
        test--;
    }
    for(i=0;i<j;i++)
    {
        cout<<"Case "<<i+1<<": "<<sum[i]<<endl;
    }
    return 0;
}
