#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> mat,ans;
int lis()
{
    int length,i,j,maxi=1;
    length=mat.size();
    //ans.push_back(1);
    for(i=0; i<length; i++)
    {
        ans.push_back(1);
        for(j=0; j<i; j++)
        {
            //cout<<mat[i]<<" "<<mat[j]<<" "<<ans[i]<<" "<<ans[j]<<endl;
            if(mat[j]>=mat[i])
            {
                ans[i]=max(ans[i],ans[j]+1);
                if(maxi<ans[i])
                {
                    maxi=ans[i];
                }
            }
        }
    }
    return maxi;
}

int main()
{
    int temp,counter=0;
    while(1)
    {
        while(1)
        {
            cin>>temp;
            if(temp<0)
            {
                break;
            }
            else
            {
                mat.push_back(temp);
            }
        }
        if(mat.size()==0)
        {
            break;
        }
        else
        {
            if(counter!=0)
            {
                cout<<endl;
            }
            counter++;
            cout<<"Test #"<<counter<<":"<<endl;
            cout<<"  maximum possible interceptions: "<<lis()<<endl;
            mat.clear();
            ans.clear();
        }
    }
    return 0;
}
