#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int>arr;

int main()
{
    int n,answer,maxi,length,i,j;
    while(cin>>n)
    {
        arr.clear();
        arr.push_back(n);
        maxi=-INT_MAX;
        while(1)
        {
            cin>>n;
            if(n==-999999) break;
            arr.push_back(n);
        }
        length=arr.size();
        for(i=0;i<length;i++)
        {
            answer=1;
            for(j=i;j<length;j++)
            {
                answer*=arr[j];
                maxi=max(maxi,answer);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
