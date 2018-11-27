#include<iostream>
#include<vector>
using namespace std;

vector<int>ans[100];
int r1[10],r2[20],r3[20],r4[10],arr[10];
int c;

void rec(int y)
{
    if(y==8)
    {
        for(int i=0; i<8; i++)
        {
            ans[c].push_back(r4[i]+1);
        }
        c++;
        return;
    }
    for(int x=0; x<8; x++)
    {
        if(r1[x] or r2[x+y] or r3[x-y+7])
            continue;
        r1[x]=r2[x+y]=r3[x-y+7]=1;
        r4[y]=x;
        //cerr<<"AAA "<<y<<endl;
        rec(y+1);
        r1[x]=r2[x+y]=r3[x-y+7]=0;
        r4[y]=0;
    }
}


int main()
{
    int i,j,mini,counter,case_counter=0;
    c=0;
    rec(0);
    while(cin>>arr[0])
    {
        case_counter++;
        mini=10;
        counter=0;
        for(i=1; i<8; i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<c;i++)
        {
            counter=0;
            //cerr<<"IIIIII "<<i<<endl;
            for(j=0;j<8;j++)
            {
                //cerr<<arr[j]<<" "<<ans[i][j]<<endl;
                if(arr[j]!=ans[i][j]) counter++;
            }
            mini=min(mini,counter);
        }
        cout<<"Case "<<case_counter<<": "<<mini<<endl;
    }
    return 0;
}
