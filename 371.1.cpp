#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
map<long long int,long long int>cycle;
bool exist(long long int k)
{
    map<long long int,long long int>::iterator it = cycle.find(k);
    return it!=cycle.end();

}
int main()
{
    long long int i,j,n,counter,maxi,seq;

    /*vector<long long int>cycle;
    cycle.push_back(1);
    for(long long int k=1;k<100;k++)
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
    }*/
    while(1)
    {
        scanf("%d%d",&i,&j);
        if(i==0&&j==0)
        {
            break;
        }
        maxi=0;
        if(i>j)
        {
            swap(i,j);
        }
        for(long long int k=i;k<=j;k++)
        {
            map<long long int,long long int>::iterator it = cycle.find(k);
            if(it!=cycle.end())
            {
                if(it->second>maxi)
                {
                    maxi=it->second;
                    seq=k;
                }
            }
            else
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
                cycle[k]=counter;
                map<long long int,long long int>::iterator it = cycle.find(k);
                if(it->second>maxi)
                {
                    maxi=it->second;
                    seq=k;
                }
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,seq,maxi);
    }
    return 0;
}
