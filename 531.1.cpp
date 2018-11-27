#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

string line1,line2,temp;
map<string,int>mark;
map<int,string>unmark;
vector<int>arr,brr;
vector<string>ans;
int dp[110][110];

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    int counter,n,m,i,j;
    while(getline(cin,line1))
    {
        mark.clear();
        unmark.clear();
        arr.clear();
        brr.clear();
        ans.clear();
        counter=1;
        while(line1!="#")
        {
            stringstream s1(line1);
            while(s1>>temp)
            {
                if(!mark[temp])
                {
                    mark[temp]=counter;
                    unmark[counter]=temp;
                    counter++;
                }
                arr.push_back(mark[temp]);
            }
            getline(cin,line1);
        }
        getline(cin,line2);
        while(line2!="#")
        {
            stringstream s2(line2);
            while(s2>>temp)
            {
                if(!mark[temp])
                {
                    mark[temp]=counter;
                    unmark[counter]=temp;
                    counter++;
                }
                brr.push_back(mark[temp]);
            }
            getline(cin,line2);
        }
        //cerr<<"AA " <<arr.size()<<" "<<brr.size()<<endl;
        for(i=1; i<=arr.size(); i++)
        {
            for(j=1; j<=brr.size(); j++)
            {
                if(arr[i-1]==brr[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                //cerr<<"QQQQ "<<i<<" "<<j<<" "<<arr[i-1]<<" "<<brr[j-1]<<" "<<dp[i][j]<<endl;
            }
        }
        //for(i=0;i<arr.size();i++) cerr<<"u "<<i<<" "<<arr[i]<<endl;
        //for(i=0;i<brr.size();i++) cerr<<"Q "<<i<<" "<<brr[i]<<endl;
        //cerr<<"D "<<dp[arr.size()][brr.size()]<<endl;
        i=arr.size(),j=brr.size();
        while(dp[i][j]>0)
        {
            if(dp[i-1][j]==dp[i][j])
                i--;
            else if(dp[i][j-1]==dp[i][j])
                j--;
            else
            {
                i--,j--;
                ans.push_back(unmark[arr[i]]);
            }
                //cerr<<"AAAA "<<endl;
        }
        cout<<ans[ans.size()-1];
        for(i=ans.size()-2; i>=0; i--)
        {
            cout<<" "<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
