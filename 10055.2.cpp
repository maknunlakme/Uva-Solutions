#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long army_1, army_2, difference[10000];
    long long i,j;
    i=0;
    while(cin>>army_1&&cin>>army_2)
    {
        if(army_1<army_2)
        {
            difference[i] = army_2 - army_1;
        }
        else if(army_2<army_1)
        {
            difference[i] = army_1 - army_2;
        }
        i++;
    }
    for(j=0;j<i;j++)
    {
        cout<<difference[j]<<endl;
    }
    return 0;
}
