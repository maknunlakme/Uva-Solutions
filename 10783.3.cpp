#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int sum[110];
    int i,j;
    i=0;
    int first,last,number;
    while(test!=0)
    {
        cin>>first;
        cin>>last;
        if(first%2==0)
        {
            first++;
        }
        if(last%2==0)
        {
            last--;
        }
        if(first==last)
        {
            sum[i] = 0;
        }
        else
        {
        number = (last-first+2)/2;
        sum[i] = (number*(first+last))/2;
        }
        i++;
        test--;
    }
    for(j=0;j<i;j++)
    {
        cout<<"Case "<<j+1<<": "<<sum[j]<<endl;
    }
    return 0;
}
