#include<iostream>
#include<cstring>
#include<map>
#define X 1000100
using namespace std;

map<int,bool>mark;

int main()
{
    int n,m,temp,counter,i;
    while(1)
    {
        cin>>n>>m;
        mark.clear();
        counter=0;
        if(n==0 and m==0) break;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            mark[temp]=1;
        }
        for(i=0;i<m;i++)
        {
            cin>>temp;
            if(mark[temp]) counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
