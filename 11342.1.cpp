#include<iostream>
#include<map>
#define X 51000
using namespace std;

int mark[X],a[X],b[X],c[X];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int i,j,k,n=224,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(i*i+j*j+k*k>50000) break;
                if(!mark[i*i+j*j+k*k])
                {
                    mark[i*i+j*j+k*k]=1;
                    a[i*i+j*j+k*k]=i;
                    b[i*i+j*j+k*k]=j;
                    c[i*i+j*j+k*k]=k;
                }
            }
        }
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        //cerr<<"TTT "<<mark[t]<<endl;
        if(!mark[t]) printf("-1\n");
        else printf("%d %d %d\n",a[t],b[t],c[t]);
    }
    return 0;
}
