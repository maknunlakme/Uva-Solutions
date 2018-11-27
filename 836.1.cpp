#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#define X 30
using namespace std;

vector<string>arr;
string line;
int brr[X];

int main()
{
    int test,n,m,i,j,k,now,maxi,t;
    cin>>test;
    getchar();
    getline(cin,line);
    for(t=1;t<=test;t++)
    {
        if(t!=1) cout<<endl;
        arr.clear();
        while(1)
        {
            getline(cin,line);
            if(line.size()==0) break;
            arr.push_back(line);
        }
        n=arr.size();
        m=arr[0].size();
        maxi=0;
        //cerr<<"AAA "<<n<<" "<<m<<endl;
        for(i=0;i<n;i++)
        {
            memset(brr,0,sizeof brr);
            for(j=i;j<n;j++)
            {
                now=0;
                for(k=0;k<m;k++)
                {
                    brr[k]+=(arr[j][k]-'0');
                    //cerr<<"DDD "<<i<<" "<<j<<" "<<brr[k]<<" "<<j-(i-1)<<endl;
                    if(brr[k]==(j-(i-1)))
                    {
                        now+=brr[k];
                        maxi=max(maxi,now);
                    }
                    else now=0;
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
