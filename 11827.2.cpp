#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
    int test,number,maxi,i,j,length,temp;
    vector<int>arr;
    string line;
    cin>>test;
    cin.get();
    while(test--)
    {
        getline(cin,line);
        stringstream ss(line);
        while(ss>>number)
        {
            arr.push_back(number);
        }
        length=arr.size();
        maxi=0;
        for(i=0;i<length;i++)
        {
            for(j=i+1;j<length;j++)
            {
                maxi=max(maxi,__gcd(arr[i],arr[j]));
                temp=__gcd(arr[i],arr[j]);
                //cout<<arr[i]<<" "<<arr[j]<<" "<<temp<<endl;
            }
        }
        cout<<maxi<<endl;
        arr.clear();
    }
}
