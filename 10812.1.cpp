#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int a,b,i,j;
    int cases_a[1000];
    int cases_b[1000];
    int s[1000],d[1000];
    i=0;
    while(test!=0)
    {
        cin>>s[i];
        cin>>d[i];
        a=(s[i]+d[i])/2;
        b=(s[i]-d[i])/2;
        cases_a[i]=a;
        cases_b[i]=b;
        test--;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if((s[j]-d[j])<0||((s[j]+d[j])%2!=0)||((s[j]-d[j])%2!=0))
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            cout<<cases_a[j]<<" ";
            cout<<cases_b[j]<<endl;
        }
    }
    return 0;
}
