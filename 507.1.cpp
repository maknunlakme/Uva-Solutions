#include<iostream>
using namespace std;
int starting,ending;
int kadanes_algo(int A[], int n)
{
    int i, max_so_far=0, max_ending_here=0,temp_index=0,max_difference=0;
    for(i=0;i<n;i++)
    {
        max_ending_here+=A[i];
        if(max_ending_here<0)
        {
            temp_index=i+1;
            max_ending_here=0;
        }
        if(max_so_far<max_ending_here)
        {
            starting=temp_index;
            ending=i;
            max_difference=ending-starting;
            max_so_far=max_ending_here;
        }
        else if(max_so_far==max_ending_here&&max_difference<i-temp_index)
        {
            starting=temp_index;
            ending=i;
            max_difference=ending-starting;
            max_so_far=max_ending_here;
        }
    }
    return max_so_far;
}

int main()
{
    int arr[30000],test,route,i,j,maxi_sum;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>route;
        for(j=1;j<route;j++)
        {
            cin>>arr[j];
        }
        maxi_sum=kadanes_algo(arr,route);
        if(starting==0)
        {
            starting=1;
        }
        if(maxi_sum==0)
        {
            cout<<"Route "<<i+1<<" has no nice parts"<<endl;
        }
        else
        {
            cout<<"The nicest part of route "<<i+1<<" is between stops "<<starting<<" and "<<ending+1<<endl;
        }
    }
    return 0;
}
