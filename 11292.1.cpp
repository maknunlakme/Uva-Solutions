#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,hlength,klength,cost,i,j,temp;
    vector<int>head,knight;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)
        {
            break;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>temp;
                head.push_back(temp);
            }
            for(i=0;i<m;i++)
            {
                cin>>temp;
                knight.push_back(temp);
            }
            sort(head.begin(),head.end());
            sort(knight.begin(),knight.end());
            hlength=head.size();
            klength=knight.size();
            /*for(i=0;i<hlength;i++)
            {
                cout<<head[i]<<" ";
            }
            cout<<endl;
            for(i=0;i<klength;i++)
            {
                cout<<knight[i]<<" ";
            }
            cout<<endl;*/
            if(hlength<=klength)
            {
                i=0;
                j=0;
                cost=0;
                while(i<hlength)
                {
                    //cout<<head[i]<<" "<<knight[j]<<" "<<i<<" "<<j<<endl;
                    if(head[i]<=knight[j])
                    {
                        cost+=knight[j];
                        i++;
                        j++;
                    }
                    else
                    {
                        j++;
                    }
                    if(j==klength)
                    {
                        break;
                    }
                }
                if(i>=hlength)
                {
                    cout<<cost<<endl;
                }
                else
                {
                    cout<<"Loowater is doomed!"<<endl;
                }
            }
            else
            {
                cout<<"Loowater is doomed!"<<endl;
            }
            head.clear();
            knight.clear();
        }
    }
    return 0;
}
