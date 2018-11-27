#include<iostream>
using namespace std;

int trr[30][30];
int rrr[30][30];
int hrr[30][30];

int main()
{
    int t,r,h,i,j,k,a,b,c,total,mini;
    while(cin>>t>>r>>h)
    {
        mini=100000000;
        for(i=0; i<t; i++)
        {
            for(j=0; j<=r; j++)
            {
                cin>>trr[i][j];
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<=h; j++)
            {
                cin>>rrr[i][j];
            }
        }
        for(i=0; i<h; i++)
        {
            for(j=0; j<=t; j++)
            {
                cin>>hrr[i][j];
            }
        }
        for(i=0; i<t; i++)
        {
            for(j=0; j<r; j++)
            {
                for(k=0; k<h; k++)
                {
                    //cerr<<"qq "<<i<<" "<<j<<" "<<k<<endl;
                    if(trr[i][j+1]==0 and rrr[j][k+1]==0 and hrr[k][i+1]==0)
                    {
                        total=trr[i][0]+rrr[j][0]+hrr[k][0];
                        //cerr<<"AA "<<i<<" "<<j<<" "<<k<<" "<<total<<endl;
                        if(total<mini)
                        {
                            mini=total;
                            a=i;
                            b=j;
                            c=k;
                        }
                    }
                }
            }
        }
        if(mini==100000000)
            cout<<"Don't get married!"<<endl;
        else
        {
            cout<<a<<" "<<b<<" "<<c<<":"<<mini<<endl;
        }
    }
    return 0;
}
