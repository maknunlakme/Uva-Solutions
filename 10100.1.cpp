#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;

string line1,line2,temp;
map<string,int>mark;
map<int,string>unmark;
vector<int>arr,brr;
vector<string>ans;
int dp[1100][1100];

int main()
{
#ifdef maknun
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
#endif // maknun
    int counter,n,m,i,j,t=0;
    while(getline(cin,line1))
    {
        t++;
        for(i=0;i<line1.size();i++)
        {
            if(line1[i]>='a' and line1[i]<='z') {}
            else if(line1[i]>='0' and line1[i]<='9') {}
            else if(line1[i]>='A' and line1[i]<='Z') {}
            else line1[i]=' ';
        }
        mark.clear();
        unmark.clear();
        arr.clear();
        brr.clear();
        ans.clear();
        counter=1;
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
        getline(cin,line2);
        for(i=0;i<line2.size();i++)
        {
            if(line2[i]>='a' and line2[i]<='z') {}
            else if(line2[i]>='0' and line2[i]<='9') {}
            else if(line2[i]>='A' and line2[i]<='Z') {}
            else line2[i]=' ';
        }
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
        cout<<setw(2)<<t;
        if(line2=="" or line1=="")
        {
            cout<<". Blank!"<<endl;
        }
        else
        {
            cout<<". Length of longest match: "<<dp[arr.size()][brr.size()]<<endl;
        }
    }
    return 0;
}
