#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool myfunction (string i,string j)
{
    int lengthi=i.length();
    int lengthj=j.length();
    int mini=min(lengthi,lengthj);
    int k;
    for(k=0;k<mini;k++)
    {
        if(i[k]!=j[k])
        {
            return i[k]<j[k];
        }
    }
    return i[k-1]<j[k-1];
}
int main()
{
    int n,i;
    vector<string> arr;
    string temp;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end(),myfunction);
        for(i=n-1;i>-1;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        arr.clear();
    }
    return 0;
}
