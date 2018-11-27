#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

vector<int> mat,ans;
stack<int>reverseprint;
int lis()
{
    int i,j,maxi=1,length;
    length=mat.size();
    for(i=0;i<length;i++)
    {
        ans.push_back(1);
        for(j=0;j<i;j++)
        {
            if(mat[i]>mat[j])
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

void printlis(int maxi)
{
    int length,i;
    length=ans.size();
    for(i=length-1;i>-1,maxi>0;i--)
    {
        if(ans[i]==maxi)
        {
            reverseprint.push(mat[i]);
            maxi--;
        }
    }
    cout<<reverseprint.size()<<endl;
    cout<<"-"<<endl;
    while(!reverseprint.empty())
    {
        cout<<reverseprint.top()<<endl;
        reverseprint.pop();
    }
}
int main()
{
    int temp,maxi;
    while(cin>>temp)
    {
        mat.push_back(temp);
    }
    maxi=lis();
    printlis(maxi);
    return 0;
}
