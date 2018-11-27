#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>d;

long long lcm(long long a,long long b)
{
    return ((a*b)/__gcd(a,b));
}

int main()
{
    int n,i,j,counter;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        counter=0;
        d.clear();
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                //cerr<<"AA "<<i<<" "<<n/i<<endl;
                d.push_back(i);
                if(n/i!=i)
                {
                    d.push_back(n/i);
                }
            }
        }
        for(i=0;i<d.size();i++)
        {
            for(j=i;j<d.size();j++)
            {
                //cerr<<"AA "<<d[i]<<" "<<d[j]<<endl;
                if(lcm(d[i],d[j])==n)
                {
                    counter++;
                }
            }
        }
        cout<<n<<" "<<counter<<endl;
    }
    return 0;
}
