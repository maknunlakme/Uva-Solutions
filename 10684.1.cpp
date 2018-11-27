#include<iostream>
using namespace std;

int kadanes_algo(int A[],int n)
{
    int i, max_so_far=0, max_ending_here=0;
    for(i=0;i<n;i++)
    {
        max_ending_here+=A[i];
        if(max_ending_here<0)
        {
            max_ending_here=0;
        }
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
    }
    return max_so_far;
}

int main()
{
    int n,arr[10100],answer,i;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        answer=kadanes_algo(arr,n);
        if(answer==0)
        {
            cout<<"Losing streak."<<endl;
        }
        else
        {
            cout<<"The maximum winning streak is "<<answer<<"."<<endl;
        }
    }
    return 0;
}
