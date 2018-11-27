#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test,shops,maxi,mini,temp;
    cin>>test;
    while(test!=0)
    {
        maxi = 0;
        mini = 200;
        cin>>shops;
        while(shops!=0)
        {
            cin>>temp;
            if(maxi<temp)
            {
                maxi = temp;
            }
            if(mini>temp)
            {
                mini = temp;
            }
            shops--;
        }
        cout<<(maxi-mini)*2<<endl;
        test--;
    }
    return 0;
}
