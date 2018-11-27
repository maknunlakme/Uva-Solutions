#include<iostream>
#define INF 999999999
using namespace std;
long long int A[10100];
struct subarray
{
    long long int low;
    long long int high;
    long long int sum;
};
struct subarray find_max_crossing_subarray(long long int low,long long int mid,long long int high)
{
    long long int i,j,max_left,max_right;
    struct subarray temp;
    long long int left_sum=(-1)*INF;
    long long int sum=1;
    for(i=mid;i>=low;i--)
    {
        sum*=A[i];
        if(sum>left_sum)
        {
            left_sum=sum;
            max_left=i;
        }
    }
    long long int right_sum=(-1)*INF;
    sum=1;
    for(j=mid+1;j<=high;j++)
    {
        sum*=A[j];
        if(sum>right_sum)
        {
            right_sum=sum;
            max_right=j;
        }
    }
    temp.low=max_left;
    temp.high=max_right;
    temp.sum=left_sum*right_sum;
    return temp;
}

struct subarray find_maximum_subarray(int low,int high)
{
    struct subarray left,right,cross,temp;
    long long int mid;
    if(high==low)
    {
        temp.low=low;
        temp.high=high;
        temp.sum=A[low];
        return temp;
    }
    else
    {
        mid=(low+high)/2;
        left=find_maximum_subarray(low,mid);
        right=find_maximum_subarray(mid+1,high);
        cross=find_max_crossing_subarray(low,mid,high);
        if(left.sum>=right.sum&&left.sum>=cross.sum)
        {
            return left;
        }
        else if(right.sum>=left.sum&&right.sum>=cross.sum)
        {
            return right;
        }
        else
        {
            return cross;
        }
    }
}
int main()
{
    long long int n,i,counter=0;
    struct subarray answer;
    while(cin>>n)
    {
        counter++;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            //cout<<"A "<<A[i]<<endl;
        }
        answer=find_maximum_subarray(0,n-1);
        //cout<<answer.sum<<" "<<n<<endl;
        if(answer.sum<0)
        {
            cout<<"Case #"<<counter<<":"<<" The maximum product is "<<0<<"."<<endl;
        }
        else
        {
            cout<<"Case #"<<counter<<":"<<" The maximum product is "<<answer.sum<<"."<<endl;
        }
    }
    return 0;
}
