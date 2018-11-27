#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int i,j,n,counter,maxi,seq;
    vector<long long int>cycle;
    cycle.push_back(1);
    cycle.push_back(3);
    for(long long int k=2,counter=1;k<100000000;k++)
    {
        for(n=k,counter=0;n>1;counter++)
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
    while((scanf("%lld%lld", &i,&j)==2)&&i>0&&j>0)
    {
        maxi=0;
        seq=0;
        if(i>j)
        {
            swap(i,j);
        }
        for(long long int k=i;k<=j;k++)
        {
            if(cycle[k]>maxi)
            {
                maxi=cycle[k];
                seq=k;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,seq,maxi);
    }
    return 0;
}
