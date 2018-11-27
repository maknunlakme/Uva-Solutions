#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,q,i,temp;
    vector<int>height,querie;
    vector<int>::iterator low,upp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>temp;
        height.push_back(temp);
    }
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>temp;
        if(temp>height[n-1])
        {
            cout<<height[n-1]<<" X"<<endl;
        }
        else if(temp<height[0])
        {
            cout<<"X "<<height[0]<<endl;
        }
        else if(temp==height[0])
        {
            upp=upper_bound(height.begin(),height.end(),temp);
            cout<<"X "<<height[upp-height.begin()]<<endl;
        }
        else if(temp==height[n-1])
        {
            low=lower_bound(height.begin(),height.end(),temp);
            cout<<height[low-height.begin()-1]<<" X"<<endl;
        }
        else
        {
            low=lower_bound(height.begin(),height.end(),temp);
            upp=upper_bound(height.begin(),height.end(),temp);
            cout<<height[low-height.begin()-1]<<" "<<height[upp-height.begin()]<<endl;

            /*if(height[low-height.begin()]==temp)
            {
                    if(height[low-height.begin()-1]<0)
                    {
                        cout<<"X";
                    }
                    else
                    {
                        cout<<height[low-height.begin()-1];
                    }
            }
            else
            {
                cout<<height[low-height.begin()];
            }
            if(height[upp-height.begin()]==temp)
            {
                    if(height[upp-height.begin()+1]>q-1)
                    {
                        cout<<" X"<<endl;
                    }
                    else
                    {
                        cout<<" "<<height[upp-height.begin()+1]<<endl;
                    }
            }
            else
            {
                cout<<" "<<height[upp-height.begin()]<<endl;
            }*/
        }
    }
    return 0;
}
