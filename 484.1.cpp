#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<int,int>arr;
    int n,length,i;
    vector<int> number;
    while(cin>>n)
    {
        if(!arr[n])
        {
            arr[n]=1;
            number.push_back(n);
        }
        else
        {
            arr[n]++;
        }
    }
    length=number.size();
    for(i=0;i<length;i++)
    {
        cout<<number[i]<<" "<<arr[number[i]]<<endl;
    }
    return 0;
}
