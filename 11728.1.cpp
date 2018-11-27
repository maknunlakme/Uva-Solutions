#include<iostream>
#include<map>
#include<cstdio>
#define X 1000
using namespace std;

int arr[X+10]={0};

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int i,j,n,counter=0;
    map<int,int>mark;
    for(i=1;i<X;i++)
    {
        for(j=i;j<X;j+=i)
        {
            arr[j]+=i;
        }
    }
    for(i=0;i<X;i++)
    {
        mark[arr[i]]=i;
    }
    while(cin>>n)
    {
        counter++;
        if(n==0)
        {
            break;
        }
        if(!mark[n])
        {
            cout<<"Case "<<counter<<": -1"<<endl;
        }
        else
        {
            cout<<"Case "<<counter<<": "<<mark[n]<<endl;
        }
    }
    return 0;
}
