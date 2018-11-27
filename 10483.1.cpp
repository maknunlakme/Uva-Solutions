#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#define X 256000000
#define Y 10000
using namespace std;

double p[Y],q[Y],r[Y];
vector<pair<long long,long long> >arr;

int main()
{
#ifdef maknun
    //freopen("tempout.txt","w",stdout);
#endif // maknun
    long long i,j,k,l,a,b,c,d,e,counter=0;
    double x,y;
    cin>>x>>y;
    for(i=1; i<=25600 and i*i*i<=X; i++)
    {
        for(j=i; j<=(25600-i) and i*j*j<=X; j++)
        {
            a=i+j;
            b=i*j;
            c=10000;
            d=c*a;
            e=b-c;
            if(b!=c and d%e==0)
            {
                l=d/e;
                if(l>=j and a+l<=25600 and b*l<=X)
                {
                    arr.push_back({i+j+l,counter});
                    p[counter]=(i*1.0)/100;
                    q[counter]=(j*1.0)/100;
                    r[counter]=(l*1.0)/100;
                    counter++;
                    //cout<<fixed<<setprecision(2)<<(i*1.0)/100<<" "<<(j*1.0)/100<<" "<<(l*1.0)/100<<endl;
                }
            }
        }
    }
    sort(arr.begin(),arr.end());
    x*=100;
    y*=100;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i].first>=x and arr[i].first<=y)
        {
            cout<<fixed<<setprecision(2)<<(arr[i].first*1.0)/100<<" = "
            <<p[arr[i].second]<<" + "<<q[arr[i].second]<<" + "<<r[arr[i].second]<<
            " = "<<p[arr[i].second]<<" * "<<q[arr[i].second]<<" * "<<r[arr[i].second]<<endl;
        }
    }
    return 0;
}
