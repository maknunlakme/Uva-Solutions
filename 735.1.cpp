#include<iostream>
#include<set>
#include<vector>
#include<cstring>
using namespace std;

set<int>value;
set<int>::iterator it;
bool visit[70][70][70];
vector<int> a;

int main()
{
    int n,i,j,k,p,c;
    for(i=0; i<=20; i++)
    {
        value.insert(i);
        value.insert(i*2);
        value.insert(i*3);
    }
    value.insert(50);
    for(it=value.begin(); it!=value.end(); it++)
    {
        a.push_back(*it);
    }
    while(1)
    {
        cin>>n;
        if(n<=0) break;
        memset(visit,0,sizeof visit);
        p=0;
        c=0;
        for(i=0; i<a.size(); i++)
        {
            for(j=0; j<a.size(); j++)
            {
                for(k=0; k<a.size(); k++)
                {
                    if(a[i]+a[j]+a[k]==n)
                    {
                        p++;
                        if(!visit[a[i]][a[j]][a[k]])
                        {
                            visit[a[i]][a[j]][a[k]]=1;
                            visit[a[i]][a[k]][a[j]]=1;
                            visit[a[j]][a[i]][a[k]]=1;
                            visit[a[j]][a[k]][a[i]]=1;
                            visit[a[k]][a[i]][a[j]]=1;
                            visit[a[k]][a[j]][a[i]]=1;
                            c++;
                        }
                    }
                }
            }
        }
        if(p==0 and c==0) cout<<"THE SCORE OF "<<n<<" CANNOT BE MADE WITH THREE DARTS."<<endl;
        else
        {
            cout<<"NUMBER OF COMBINATIONS THAT SCORES "<<n<<" IS "<<c<<"."<<endl;
            cout<<"NUMBER OF PERMUTATIONS THAT SCORES "<<n<<" IS "<<p<<"."<<endl;
        }
        cout<<"**********************************************************************"<<endl;

    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
