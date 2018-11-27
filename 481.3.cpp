#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;

vector<int>a,b,c,d;

int nlognlis()
{
    int length,i,j,maxi,low,track;
    length=a.size();
    j=1;
    maxi=1;
    b.push_back(a[0]);
    c.push_back(-1);
    d.push_back(0);
    for(i=1;i<length;i++)
    {
        c.push_back(-1);
        if(a[i]>a[i-1])
        {

            if(j>=maxi)
            {
                b.push_back(a[i]);
                d.push_back(i);
                maxi=j+1;
            }
            else
            {
                b[j]=a[i];
                d[j]=i;
            }
            c[i]=d[j-1];
            track=i;
            j++;
        }
        else if(a[i]<=a[i-1])
        {
            low=lower_bound(b.begin(),b.end(),a[i])-b.begin();
            cout<<"Low "<<low<<endl;
            b[low]=a[i];
            d[low]=i;
            if(low!=0)
            {
                c[i]=d[low-1];
            }
            j=low+1;
        }
        //cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    return maxi;
}


using namespace std;
int main()
{
    int temp,maxi,i;
    while(cin>>temp)
    {
        a.push_back(temp);
    }
    maxi=nlognlis();
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    //cout<<"d size "<<d.size();
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<maxi<<endl;
    return 0;
}
