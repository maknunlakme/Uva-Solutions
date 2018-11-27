#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,t,m,time,teamid,i,mark[15][110]={0};
    char temp,problem;
    string verdict;
    map<char,int> last;
    map<char,int> blood;
    //map<string,int>::iterator it;
    cin>>n>>t>>m;
    for(i=0; i<m; i++)
    {
        cin>>time>>teamid>>problem>>verdict;
        if(verdict=="Yes")
        {
            if(!last[problem])
            {
                //cout<<"working "<<problem<<" "<<teamid<<endl;
                last[problem]=teamid;
                blood[problem]=time;
                mark[problem-'A'][teamid]=1;
                //cout<<"marking "<<problem<<" "<<problem-'A'<<" "<<teamid<<endl;

            }
            else if(mark[problem-'A'][teamid]!=1)
            {
                //cout<<" change "<<problem-'A'<<" "<<mark[problem-'A'][teamid]<<endl;
                last[problem]=teamid;
                blood[problem]=time;
                mark[problem-'A'][teamid]=1;
            }
        }
    }
    for(temp='A',i=0; i<n; i++,temp++)
    {
        cout<<temp<<" ";
        if(blood[temp]==0)
        {
            cout<<"- ";
        }
        else
        {
            cout<<blood[temp]<<" ";
        }
        if(last[temp]==0)
        {
            cout<<"-"<<endl;
        }
        else
        {
            cout<<last[temp]<<endl;
        }
        //cout<<it->first<<" "<<blood[it->second]<<" "<<it->second<<endl;
    }
    return 0;
}
