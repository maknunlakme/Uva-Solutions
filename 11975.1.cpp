#include<iostream>
#include<map>
using namespace std;

map<int,int>corner,midline,diagonal,table;

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    bool no;
    int a,b,c,d,i,j,k,total,n,l,test,t,temp,p;
    int arr[10][10]= {0};
    cin>>test;
    for(t=1; t<=test; t++)
    {
        if(t!=1) cout<<endl;
        cin>>n>>l;
        corner.clear();
        midline.clear();
        diagonal.clear();
        table.clear();
        for(i=0; i<n; i++)
        {
            cin>>temp;
            if(i<35)
                corner[temp]=1;
            if(i<40)
                midline[temp]=1;
            if(i<45)
                diagonal[temp]=1;
            table[temp]=1;
        }
        cin>>a>>b>>c>>d;
        cout<<"Case "<<t<<":"<<endl;
        for(p=0; p<l; p++)
        {
            total=0;
            for(j=0; j<5; j++)
            {
                for(k=0; k<5; k++)
                {
                    cin>>arr[j][k];
                }
            }
            if((corner[arr[0][0]]==1) and
                    (corner[arr[0][4]]==1) and
                    (corner[arr[4][0]]==1) and
                    (corner[arr[4][4]]==1))
            {
                total+=a;
            }
            no=false;
            for(i=0; i<5; i++)
            {
                if(midline[arr[2][i]]==0)
                {
                    no=true;
                    break;
                }
            }
            if(no==false)
                total+=b;
            no=false;
            for(i=0; i<5; i++)
            {
                if(diagonal[arr[i][i]]==0)
                {
                    no=true;
                    break;
                }
            }
            for(i=0,j=4; i<5; i++,j--)
            {
                if(diagonal[arr[i][j]]==0)
                {
                    no=true;
                    break;
                }
            }
            if(no==false)
                total+=c;
            no=false;
            for(i=0; i<5; i++)
            {
                for(j=0; j<5; j++)
                {
                    if(table[arr[i][j]]==0)
                    {
                        no=true;
                        false;
                    }
                }
            }
            if(no==false)
                total+=d;
            cout<<total<<endl;
        }
    }
    return 0;
}
