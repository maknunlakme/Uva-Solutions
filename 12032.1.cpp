#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,test,temp,n,prev,maxi,temp2,counter;
    vector<int>arr;
    vector<int>::iterator low;
    cin>>test;
    for(i=0;i<test;i++)
    {
        prev=0;
        maxi=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>temp;
            temp2=temp-prev;
            arr.push_back(temp2);
            if(maxi<temp2)
            {
                maxi=temp2;
            }
            prev=temp;
        }
        counter=0;
        for(j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
            if(arr[j]==maxi)
            {
                counter++;
            }
        }
        cout<<endl;
        if(counter==1)
        {
            cout<<"Case "<<i+1<<": "<<maxi<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<maxi+1<<endl;
        }
        /*low=cout<<"Case "<<i+1<<": "<<maxi<<endl;lower_bound(arr.begin(),arr.end(),maxi);
        cout<<arr[low-arr.begin()]<<" "<<low-arr.begin()<<endl;
        arr.erase(low);
        if(binary_search(arr.begin(),arr.end(),maxi))
        {
            cout<<"Case "<<i+1<<": "<<maxi+1<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<maxi<<endl;
        }*/
        arr.clear();
    }
    return 0;
}
