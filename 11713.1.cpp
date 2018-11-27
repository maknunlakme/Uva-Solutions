#include<iostream>
#include<string>
using namespace std;

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int n,i;
    string a,b;
    bool yes;
    cin>>n;
    while(n--)
    {
        yes=true;
        cin>>a>>b;
        if(a.size()!=b.size())
        {
            yes=false;
        }
        else
        {
            for(i=0; i<a.size(); i++)
            {
                if((a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u')
                   and (b[i]=='a' or b[i]=='e' or b[i]=='i' or b[i]=='o' or b[i]=='u'))
                {
                    continue;
                }
                else
                {
                    if(a[i]!=b[i])
                    {
                        yes=false;
                        break;
                    }
                }
            }
        }
        if(yes==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
