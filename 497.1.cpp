#include <iostream>
#include <vector>
#include<cstring>
#include<climits>
#include<sstream>
#include <algorithm>
using namespace std;

vector<long long>arr,a;
string line;

int main()
{
    long long n=0,temp,low,maxi,i,test,t=0;
    cin>>test;
    getchar();
    getchar();
    for(t=1;t<=test;t++)
    {
        if(t!=1) cout<<endl;
        a.clear();
        arr.clear();
        n=0;
        while(1)
        {
            getline(cin,line);
            if(line.empty()) break;
            stringstream s(line);
            s>>temp;
            a.push_back(temp);
            n++;
        }
        vector<long long> d(n+1, LLONG_MAX),c(n+1,0);
        maxi=d[0]=-LLONG_MAX;
        for (i = 0; i < n; i++)
        {
            low=lower_bound(d.begin(), d.end(), a[i])-d.begin();
            //cerr<<"DD "<<a[i]<<" "<<low<<endl;
            d[low]=a[i];
            c[i]=low;
            maxi=max(maxi,low);
        }
        for(i=n-1; i>=0 and maxi>0; i--)
        {
            if(c[i]==maxi)
            {
                arr.push_back(a[i]);
                maxi--;
            }
        }
        cout<<"Max hits: "<<arr.size()<<endl;
        for(i=arr.size()-1; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }
}

