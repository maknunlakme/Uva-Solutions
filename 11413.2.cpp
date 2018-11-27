#include <iostream>
#include <vector>
using namespace std;

vector<int>vessel;
bool simulation(int m,int capa)
{
    int i,container=1,capacity=capa,vsize=vessel.size();
    for(i=0;i<vsize;i++)
    {
        if (vessel[i]>capa)
        {
            return false;
        }
        if(vessel[i]>capacity)
        {
            if(container==m)
            {
                return false;
            }
            container++;
            capacity=capa;
        }
        capacity-=vessel[i];
    }
    return true;
}

int main()
{
    int n,m,i,temp,low,high,mid,capa;
    while (cin>>n>>m)
    {
        for (i=0;i<n;i++)
        {
            cin>>temp;
            vessel.push_back(temp);
        }
        low=1,high=1000000000,capa=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(simulation(m,mid))
            {
                capa=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        cout<<capa<<endl;
    }
    return 0;
}
