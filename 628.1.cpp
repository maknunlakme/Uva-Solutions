#include<iostream>
#include<vector>
using namespace std;

vector<string>arr;
string line;
int length;

void rec(int pos,string ans)
{
    int i;
    if(pos==length)
    {
        cout<<ans<<endl;
        return;
    }
    if(line[pos]=='#')
    {
        for(i=0;i<arr.size();i++)
        {
            rec(pos+1,ans+arr[i]);
        }
    }
    else if(line[pos]=='0')
    {
        for(i=0;i<10;i++)
        {
            ans.push_back('0'+i);
            rec(pos+1,ans);
            ans.pop_back();
        }
    }

}


int main()
{
    int n,m,i;
    while(cin>>n)
    {
        arr.clear();
        for(i=0;i<n;i++)
        {
            cin>>line;
            arr.push_back(line);
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>line;
            length=line.length();
            cout<<"--"<<endl;
            rec(0,"");
        }
    }
    return 0;
}
