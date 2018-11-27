#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int test,n,k,temp,total,i,j,counter;
    vector<long long int>arr,brr;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n>>k;
        for(j=0;j<n;j++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        for(j=0;j<n;j++)
        {
            cin>>temp;
            brr.push_back(temp-arr[j]);
        }
        sort(brr.begin(),brr.end());
        total=0;
        counter=0;
        for(j=0;j<n;j++)
        {
            if(brr[j]<0&&counter<k)
            {
                counter++;
            }
            else
            {
                total+=brr[j];
            }
        }
        if(total>0)
        {
            cout<<"Case "<<i+1<<": "<<total<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": No Profit"<<endl;
        }
        arr.clear();
        brr.clear();
    }
    return 0;
}
