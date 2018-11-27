#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<pair<int,int> >one,three;

int main()
{
    int n,i,j,maxi,mini;
    char temp;
    while(cin>>n)
    {
        one.clear();
        three.clear();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>temp;
                if(temp=='1')
                {
                    one.push_back({i,j});
                }
                else if(temp=='3')
                {
                    three.push_back({i,j});
                }
            }
        }
        maxi=0;
        for(i=0;i<one.size();i++)
        {
            mini=10000000000;
            for(j=0;j<three.size();j++)
            {
                mini=min(mini,abs(one[i].first-three[j].first)+abs(one[i].second-three[j].second));
                //cerr<<"RR "<<one[i].first<<" "<<one[i].second<<" "<<three[j].first<<" "<<three[j].second<<endl;
            }
            //cerr<<"RR "<<mini<<endl;
            maxi=max(maxi,mini);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
