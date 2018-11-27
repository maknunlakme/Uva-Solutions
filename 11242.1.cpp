#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

vector<double>ratioo;
double arr[110],brr[110];

int main()
{
    int i,j,n,m;
    double spread;
    while(1)
    {
        spread=0.0;
        ratioo.clear();
        cin>>n;
        if(n==0) break;
        cin>>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(j=0;j<m;j++)
        {
            cin>>brr[j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ratioo.push_back(brr[j]/arr[i]);
            }
        }
        sort(ratioo.begin(),ratioo.end());
        for(i=1;i<ratioo.size();i++)
        {
            spread=max(spread,ratioo[i]/ratioo[i-1]);
        }
        cout<<fixed<<setprecision(2)<<spread<<endl;
    }
    return 0;
}
