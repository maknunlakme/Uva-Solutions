#include<iostream>
using namespace std;

int arr[30],brr[30];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,counter,i,j;
    while(cin>>n)
    {
        counter=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]==brr[j]) break;
            }
            for(;j>i;j--)
            {
                swap(brr[j],brr[j-1]);
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
