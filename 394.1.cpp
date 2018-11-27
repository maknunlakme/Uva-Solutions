#include<iostream>
#include<map>
using namespace std;

struct add
{
    string name;
    int address;
    int byte;
    int dimension;
    int lower[15];
    int upper[15];
}arr[100];
map<string,int>index;
int main()
{
    int n,r,i,j,total,low,up,found,dims[15],next;
    string tempname;
    cin>>n>>r;
    for(i=0;i<n;i++)
    {
        cin>>arr[i].name>>arr[i].address>>arr[i].byte>>arr[i].dimension;
        index[arr[i].name]=i;
        for(j=0;j<arr[i].dimension;j++)
        {
            cin>>arr[i].lower[j];
            cin>>arr[i].upper[j];
        }
    }
    for(i=0;i<r;i++)
    {
        cin>>tempname;
        found=index[tempname];
        for(j=0;j<arr[found].dimension;j++)
        {
            cin>>dims[j];
        }
        total=arr[found].address;
        next=1;
        for(j=arr[found].dimension-1;j>-1;j--)
        {
            total+=(dims[j]-arr[found].lower[j])*(next*arr[found].byte);
            next*=arr[found].upper[j]-(arr[found].lower[j]-1);
            //cout<<j<<" "<<total<<" "<<(dims[j]-arr[found].lower[j]) <<" "<<next<<endl;
        }
        cout<<tempname<<"["<<dims[0];
        for(j=1;j<arr[found].dimension;j++)
        {
            cout<<", "<<dims[j];
        }
        cout<<"] = "<<total<<endl;
    }
    return 0;
}
