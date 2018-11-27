#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int i,j,n,counter,maxi;
    vector<int>cycle;
    cycle.push_back(1);
    for(int k=1,counter=1;k<1000010;k++)
    {
        for(n=k,counter=1;n>1;counter++)
        {
            if(n%2!=0)
            {
                n=3*n+1;
                n>>=1;
                counter++;
            }
            else
                n>>=1;
        }
        cycle.push_back(counter);
    }
    while((scanf("%d%d", &i,&j)==2)&&i>0&&j>0)
    {
        printf("%d %d ", i,j);
        maxi=0;
        if(i>j)
        {
            swap(i,j);
        }
        for(int k=i;k<=j;k++)
        {
            if(cycle[k]>maxi)
            {
                maxi=cycle[k];
            }
        }
        printf("%d\n",maxi);
    }
    return 0;
}
