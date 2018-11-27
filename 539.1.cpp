#include<iostream>
using namespace std;

int ans,x[60],y[60];
bool mark[60];
int n,m;

void rec(int last,int counter)
{
    for(int i=0;i<2*m;i++)
    {
        if(last==x[i] and mark[i]==false)
        {
            //cerr<<"RR "<<last<<" "<<x[i]<<" "<<y[i]<<" "<<counter<<" "<<mark[i]<<endl;
            mark[i]=true;
            if(i<m) mark[i+m]=true;
            else mark[i-m]=true;
            rec(y[i],counter+1);
            mark[i]=false;
            if(i<m) mark[i+m]=false;
            else mark[i-m]=false;
        }
    }
    ans=max(ans,counter);
}


int main()
{
    int i,maxi;
    while(1)
    {
        maxi=0;
        cin>>n>>m;
        if(n==0 and m==0) break;
        for(i=0;i<m;i++)
        {
            cin>>x[i]>>y[i];
        }
        for(i=m;i<2*m;i++)
        {
            x[i]=y[i-m];
            y[i]=x[i-m];
        }
        for(i=0;i<n;i++)
        {
            ans=0;
            rec(i,0);
            maxi=max(ans,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
