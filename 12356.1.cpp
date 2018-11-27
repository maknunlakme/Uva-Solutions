#include<iostream>
using namespace std;

int leftt[110000];
int rightt[110000];
int main()
{
    int s,k,i,a,b;
    while(1)
    {
        cin>>s>>k;
        if(s==0&&k==0)
        {
            break;
        }
        for(i=1;i<=s;i++)
        {
            leftt[i]=i-1;
            rightt[i]=i+1;
        }
        leftt[1]=-1;
        rightt[s]=-1;
        for(i=0;i<k;i++)
        {
            cin>>a>>b;
            leftt[rightt[b]]=leftt[a];
            rightt[leftt[a]]=rightt[b];
            if(leftt[a]==-1) cout<<"*";
            else cout<<leftt[a];
            cout<<" ";
            if(rightt[b]==-1) cout<<"*";
            else cout<<rightt[b];
            cout<<endl;
        }
        cout<<"-"<<endl;
    }
    return 0;
}
