#include<iostream>
#include<string>
#include<vector>
using namespace std;

string number[20];
int a[20],b[20];
char arr[11000][6];
vector<string>ans;

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,n,m,i,j,k,l,x,y;
    bool no;
    for(i=0; i<10000; i++)
    {
        sprintf(arr[i],"%04d",i);
    }
    cin>>test;
    while(test--)
    {
        ans.clear();
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>number[i];
            scanf("%d/%d",&a[i],&b[i]);
        }
        for(i=0;i<10000;i++)
        {
            no=false;
            for(j=0;j<n;j++)
            {
                int temp[12]={0};
                x=0,y=0;
                for(k=0;k<4;k++)
                {
                    temp[number[j][k]-'0']++;
                }
                for(k=0;k<4;k++)
                {
                    //cerr<<"RR "<<arr[i][k]<<" "<<temp[arr[i][k]-'0']<<endl;
                    if(temp[arr[i][k]-'0']>0)
                    {
                        temp[arr[i][k]-'0']--;
                        y++;
                    }
                }
                for(k=0;k<4;k++)
                {
                    if(arr[i][k]==number[j][k]) x++,y--;
                }
                //cerr<<"RR "<<i<<" "<<number[j]<<" "<<a[j]<<" "<<b[j]<<" "<<x<<" "<<y<<endl;
                if(x!=a[j] or y!=b[j])
                {
                    no=true;
                    break;
                }
            }
            if(no==false)
            {
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()==1)
            cout<<ans[0]<<endl;
        else if(ans.size()>1)
            cout<<"indeterminate"<<endl;
        else if(ans.size()==0)
            cout<<"impossible"<<endl;
    }
    return 0;
}
