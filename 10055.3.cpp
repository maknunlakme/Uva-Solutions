#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long army_1, army_2;
    while(scanf("%lld%lld",&army_1,&army_2)==2)
    {
        if(army_1<army_2)
        {
            cout<<army_2 - army_1<<endl;
        }
        else
        {
            cout<<army_1 - army_2<<endl;
        }
    }
    return 0;
}
