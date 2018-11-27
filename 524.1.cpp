#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

vector<int>arr;
bool used[20];
bool prime[35]= {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0};
int n;
void per(int id)
{
    int i;
    if(id==n+1)
    {
        if(prime[arr[0]+arr[n-1]]==1)
        {
            for(i=0; i<n-1; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<arr[n-1]<<endl;
        }
    }
    else
    {
        for(i=2; i<=n; i++)
        {
            if(!used[i])
            {
                if(prime[arr[id-2]+i]==1)
                {
                    used[i]=1;
                    arr.push_back(i);
                    per(id+1);
                    used[i]=0;
                    arr.pop_back();
                }
            }
        }
    }
}
int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    arr.push_back(1);
    int counter=0;
    while(cin>>n)
    {
        counter++;
        if(counter!=1)
        {
            cout<<endl;
        }
        cout<<"Case "<<counter<<":"<<endl;
        per(2);
    }
    return 0;
}
