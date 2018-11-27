#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int test,match,i,j,b,w,t,a;
    string line;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>match;
        cin>>line;
        b=0;
        w=0;
        t=0;
        a=0;
        //cout<<line<<endl;
        for(j=0;j<match;j++)
        {
            if(line[j]=='B')
            {
                b++;
            }
            else if(line[j]=='W')
            {
                w++;
            }
            else if(line[j]=='T')
            {
                t++;
            }
            else if(line[j]=='A')
            {
                a++;
            }
        }
        if(b>0&&w==0&&t==0)
        {
            cout<<"Case "<<i+1<<": BANGLAWASH"<<endl;
        }
        else if(w>0&&b==0&&t==0)
        {
            cout<<"Case "<<i+1<<": WHITEWASH"<<endl;
        }
        else if(b>w)
        {
            cout<<"Case "<<i+1<<": BANGLADESH "<<b<<" - "<<w<<endl;
        }
        else if(w>b)
        {
            cout<<"Case "<<i+1<<": WWW "<<w<<" - "<<b<<endl;
        }
        else if(a==match)
        {
            cout<<"Case "<<i+1<<": ABANDONED"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": DRAW "<<b<<" "<<t<<endl;
        }
    }
    return 0;
}

