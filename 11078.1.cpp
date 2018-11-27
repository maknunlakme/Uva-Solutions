#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int>arr;

int main()
{
    int test,i,j,n,maxi,temp,answer;
    cin>>test;
    while(test--)
    {
        cin>>n;
        maxi=-INT_MAX;
        answer=-INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        for(i=0;i<n-1;i++)
        {
            if(maxi<arr[i])
            {
                maxi=arr[i];
            }
            if(answer<(maxi-arr[i+1]))
            {
                answer=maxi-arr[i+1];
            }
        }
        cout<<answer<<endl;
        arr.clear();
    }
    return 0;
}
