#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#define X 10010
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    vector<int>arr,brr;
    int test,m,n,i,j,counter,answer,mini,temp;
    cin>>test;
    while(test--)
    {
        cin>>m>>n;
        for(i=0; i<m; i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        for(i=0; i<n; i++)
        {
            cin>>temp;
            brr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        counter=0;
        for(i=0,j=0;i<m&&j<n;)
        {
            if(arr[i]==brr[j])
            {
                counter++;
                i++;
                j++;
            }
            else
            {
                if(arr[i]<brr[j])
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
        }
        //cout<<"counter "<<counter<<endl;
        answer=(m-counter)+(n-counter);
        cout<<answer<<endl;
        arr.clear();
        brr.clear();
    }
    return 0;
}
