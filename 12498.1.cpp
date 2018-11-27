#include<iostream>
using namespace std;

char arr[60][60];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,test,t,i,j,k,l,r,c,moves,total,ans,a,b;
    bool no;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        cin>>r>>c;
        ans=10000;
        no=false;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<c;i++)
        {
            total=0;
            for(j=0;j<r;j++)
            {
                a=10000;
                b=10000;
                for(k=i,l=0;k>=0;k--,l++)
                {
                    if(arr[j][k]=='0')
                    {
                        a=l;
                        break;
                    }
                }
                for(k=i,l=0;k<c;k++,l++)
                {
                    if(arr[j][k]=='0')
                    {
                        b=l;
                        break;
                    }
                }
                moves=min(a,b);
                if(moves!=10000)
                {
                    total+=moves;
                }
                else
                {
                    no=true;
                    break;
                }
            }
            ans=min(ans,total);
        }
        if(no==true) cout<<"Case "<<t<<": "<<-1<<endl;
        else cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
