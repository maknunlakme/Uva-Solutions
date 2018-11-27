#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long l,train[2000],i,j,temp,swaps;
    bool sorted;
    while(cin>>l)
    {
        swaps = 0;
        sorted = false;
        for(i=0;i<l;i++)
        {
            cin>>train[i];
        }

        while(sorted==false)
        {
            sorted = true;
            for(i=0;i<(l-1);i++)
            {
                if(train[i]>train[i+1])
                {
                    sorted = false;
                    break;
                }
            }
            if(sorted==true)
            {
                break;
            }
            for(j=0;j<(l-1);j++)
            {
                if(train[j]>train[j+1])
                {
                    swap(train[j],train[j+1]);
                    swaps++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<swaps<<endl;
    }
    return 0;
}
