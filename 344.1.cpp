#include<iostream>
using namespace std;
int roman[15][5];
int digit[115][5];
int main()
{
    int m,n,k=0;
    int i[]={0,1,2,3,1,0,1,2,3,1,0};
    int v[]={0,0,0,0,1,1,1,1,1,0,0};
    int X[]={0,0,0,0,0,0,0,0,0,1,1};
    int x[]={0,1,2,3,1,0,1,2,3,1,0};
    int l[]={0,0,0,0,1,1,1,1,1,0,0};
    int c[]={0,0,0,0,0,0,0,0,0,1,1};
    int total[]={0,0,0,0,0};
    for(m=0;m<11;m++)
    {
        for(n=0;n<10;n++)
        {
            digit[k][0]=total[0]+i[n];
            digit[k][1]=total[1]+v[n];
            digit[k][2]=total[2]+x[m]+X[n];
            digit[k][3]=total[3]+l[m];
            digit[k][4]=total[4]+c[m];
            total[0]=digit[k][0];
            total[1]=digit[k][1];
            total[2]=digit[k][2];
            total[3]=digit[k][3];
            total[4]=digit[k][4];
            k++;
        }
    }
    while(1)
    {
        cin>>m;
        if(m==0)
        {
            break;
        }
        cout<<m<<": "<<digit[m][0]<<" i, "<<digit[m][1]<<" v, "<<digit[m][2]<<" x, "<<digit[m][3]<<" l, "<<digit[m][4]<<" c"<<endl;
    }
    return 0;
}
