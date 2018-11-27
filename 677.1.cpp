#include<iostream>
#include<vector>
using namespace std;

int n,m;
int mat[12][12];
bool node[12];
bool printed;

void rec(int pos,int length,vector<int> arr)
{
    //cerr<<"RR "<<pos<<" "<<length<<" "<<m<<endl;
    int i;
    if(length==m)
    {
        printed=true;
        cout<<"("<<arr[0];
        for(i=1;i<arr.size();i++)
        {
            cout<<","<<arr[i];
        }
        cout<<")"<<endl;
        return;
    }
    for(i=1;i<=n;i++)
    {
        //cerr<<"PP "<<pos<<" "<<i<<" "<<mat[pos][i]<<endl;
        if(mat[pos][i]==1 and node[i]==false)
        {
            arr.push_back(i);
            node[i]=true;
            rec(i,length+1,arr);
            arr.pop_back();
            node[i]=false;
        }
    }
}

int main()
{
    int i,j,number,counter=0;
    do
    {
        printed=false;
        counter++;
        if(counter!=1) cout<<endl;
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>mat[i][j];
            }
        }
        vector<int> a;
        node[1]=true;
        a.push_back(1);
        rec(1,0,a);
        node[1]=false;
        if(printed==false)
        {
            cout<<"no walk of length "<<m<<endl;
        }
    }
    while(cin>>number);
    return 0;
}
