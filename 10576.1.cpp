#include<iostream>
using namespace std;

int maxi,s,d;

void rec(int pos,int arr[])
{
    //cerr<<"RR "<<pos<<" "<<value<<endl;
    if(pos==12)
    {
        int total=0,i;
        for(i=0; i<12; i++)
        {
            total+=arr[i];
        }
        maxi=max(maxi,total);
        return;
    }
    int i,last=0;
    for(i=1; i<5 and pos-i>=0; i++)
    {
        last+=arr[pos-i];
    }
    //cerr<<"DD "<<i<<" "<<last<<endl;
    if(i<5 or (i==5 and last+s<0))
    {
        //cerr<<"EE "<<i<<" "<<last<<endl;
        arr[pos]=s;
        rec(pos+1,arr);
        arr[pos]=0;
    }
    if(i<5 or (i==5 and last-d<0))
    {
        arr[pos]=-d;
        rec(pos+1,arr);
        arr[pos]=0;
    }
}


int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
#endif // maknun
    int arr[15]= {0};
    while(cin>>s>>d)
    {
        maxi=0;
        rec(0,arr);
        if(maxi==0) cout<<"Deficit"<<endl;
        else cout<<maxi<<endl;
    }
    return 0;
}
