#include<iostream>
#include<cstring>
using namespace std;

int mark[100],g[10],y[10],r[10];
double l[10];

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
#endif // maknun
    int n,blah,i,j,start,counter=0;
    double time;
    bool printed;
    while(1)
    {
        cin>>n;
        counter++;
        printed=false;
        if(n==-1)
            break;
        memset(mark,0,sizeof mark);
        for(i=0; i<n; i++)
        {
            cin>>l[i]>>g[i]>>y[i]>>r[i];
        }
        for(i=30; i<=60; i++)
        {
            for(j=0; j<n; j++)
            {
                time=(3600.0/i)*l[j];
                blah=time/(g[j]+y[j]+r[j]);
                //cerr<<"AAAAAA "<<time<<" "<<(3600.0/i)<<" "<<l[j]<<endl;
                time-=blah*(g[j]+y[j]+r[j]);
                if(time>g[j]+y[j])
                    mark[i]=true;
                //cerr<<"RR "<<time<<" "<<blah<<endl;
            }
        }
        cout<<"Case "<<counter<<":";
        start=0;
        for(i=30; i<=60; i++)
        {
            if(mark[i]==true)
            {
                if(start!=0 and start+1!=i and printed==false)
                {
                    printed=true;
                    cout<<" "<<start<<"-"<<i-1;
                    start=0;
                }
                else if(start!=0 and printed==false)
                {
                    printed=true;
                    cout<<" "<<start;
                    start=0;
                }
                if(start!=0 and start+1!=i and printed==true)
                {
                    cout<<", "<<start<<"-"<<i-1;
                    start=0;
                }
                else if(start!=0 and printed==true)
                {
                    cout<<", "<<start;
                    start=0;
                }
            }
            else if(mark[i]==false and start==0)
                start=i;
        }
        if(start!=0 and start+1!=i and printed==false)
        {
            printed=true;
            cout<<" "<<start<<"-"<<i-1;
            start=0;
        }
        else if(start!=0 and printed==false)
        {
            printed=true;
            cout<<" "<<start;
            start=0;
        }
        if(start!=0 and start+1!=i and printed==true)
        {
            cout<<", "<<start<<"-"<<i-1;
            start=0;
        }
        else if(start!=0 and printed==true)
        {
            cout<<", "<<start;
            start=0;
        }
        if(printed==false)
        {
            cout<<" No acceptable speeds."<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
