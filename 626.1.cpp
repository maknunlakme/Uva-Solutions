#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int arr[100][100];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,i,j,k,counter=0;
    while(cin>>n)
    {
        counter=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==1 and i!=j)
                {
                    for(k=0;k<n;k++)
                    {
                        if(arr[j][k]==1 and arr[k][i]==1 and j!=k and k!=i)
                        {
                            if((i<j and j<k) or (i>j and j>k))
                            {
                                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                                counter++;
                            }
                        }
                    }
                }
            }
        }
        cout<<"total:"<<counter<<endl<<endl;
    }
    return 0;
}
