#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long median[10010],temp,i;
    i = 0;
    while(cin>>temp)
    {
        median[i] = temp;
        sort(median,median+i+1);
        if(i%2==0)
        {
            cout<<median[i/2]<<endl;
        }
        else
        {
            temp = median[i/2]+median[i/2 + 1];
            cout<<temp/2<<endl;
        }
        i++;
    }
    return 0;
}
