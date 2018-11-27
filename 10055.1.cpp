#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int hasmats_army, opponents_army, difference[10000];
    int i,j;
    i=0;
    while(cin>>hasmats_army&&cin>>opponents_army)
    {
        difference[i] = opponents_army - hasmats_army;
        i++;
    }
    for(j=0;j<i;j++)
    {
        cout<<difference[j]<<endl;
    }
    return 0;
}
