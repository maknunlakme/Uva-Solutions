#include<iostream>
#include<vector>
#define inf 999999999
using namespace std;
int main()
{
    int n,m,temp,i,maxitemp,maxitotal,loop,mini,result;
    vector<int> container;
    while(cin>>n)
    {
        cin>>m;
        mini=inf;
        for(i=0; i<n; i++)
        {
            cin>>temp;
            container.push_back(temp);
            if(temp<mini)
            {
                mini=temp;
            }
        }
        if(n<m)
        {
            result=mini;
        }
        else
        {
            maxitemp=0;
            loop=n-m+1;
            for(i=0;i<loop; i++)
            {
                maxitemp+=container[i];
            }
            maxitotal=maxitemp;
            for(i=m; i<n; i++)
            {
                maxitemp-=container[i-m];
                maxitemp+=container[i];
                if(maxitemp<maxitotal)
                {
                    maxitotal=maxitemp;
                }
            }
            result=maxitotal;
        }
        cout<<result<<endl;
        container.clear();
    }
    return 0;
}
