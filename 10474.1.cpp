#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,q,i,temp,counter=0,temp2;
    vector<int> marble,querie;
    vector<int>::iterator found;
    while(1)
    {
        cin>>n>>q;
        if(n==0&&q==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>temp;
            marble.push_back(temp);
        }
        for(i=0;i<q;i++)
        {
            cin>>temp;
            querie.push_back(temp);
        }
        counter++;
        stable_sort(marble.begin(),marble.end());
        cout<<"CASE# "<<counter<<":"<<endl;
        for(i=0;i<q;i++)
        {
            found=lower_bound(marble.begin(),marble.end(),querie[i]);
            if(marble[found-marble.begin()]==querie[i])
            {
                cout<<querie[i]<<" found at "<<(found-marble.begin()+1)<<endl;
            }
            else
            {
                cout<<querie[i]<<" not found"<<endl;
            }
        }
        marble.clear();
        querie.clear();
    }
    return 0;
}
