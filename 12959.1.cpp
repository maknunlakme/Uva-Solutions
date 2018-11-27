#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j,r,i,k,arr[600],maxi,index,temp;
    while(cin>>j>>r)
    {
        memset(arr,0,sizeof(arr));
        maxi=0;
        for(i=0;i<r;i++)
        {
            for(k=0;k<j;k++)
            {
                cin>>temp;
                arr[k]+=temp;
                if(maxi<=arr[k])
                {
                    maxi=arr[k];
                    index=k+1;
                }
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
