#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<climits>
#define X 1000000
using namespace std;

int arr[X],brr[X],mark[X],blah[X];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,t,i,j,n,m,c,maxi,temp;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        scanf("%d%d%d",&c,&n,&m);
        memset(arr,0,sizeof arr);
        memset(brr,0,sizeof brr);
        memset(mark,0,sizeof mark);
        vector<int>blah;
        n++,m++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            mark[arr[i]]=i+1;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&brr[i]);
            if(mark[brr[i]])
            blah.push_back(mark[brr[i]]);
            //cerr<<"D "<<i<<" "<<blah[i]<<endl;
        }
        vector<int> a(X,INT_MAX);
        maxi=a[0]=-INT_MAX;
        for(i=0;i<blah.size();i++)
        {
            temp=upper_bound(a.begin(),a.end(),blah[i])-a.begin();
            a[temp]=blah[i];
            maxi=max(maxi,temp);
        }
        printf("Case %d: %d\n",t,maxi);
    }
    return 0;
}
