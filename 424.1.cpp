#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    vector<string>line;
    int i,j,maxi=0,length,add,carry,m,n;
    char tempchar;
    string a,b;
    while(1)
    {
        cin>>a;
        if(a=="0")
        {
            break;
        }
        length=a.length();
        if(maxi<length)
        {
            maxi=length;
        }
        b.clear();
        for(i=length-1; i>=0; i--)
        {
            b.push_back(a[i]);
        }
        line.push_back(b);
        a.clear();
    }
    length=line.size();
    b.clear();
    b=line[0];
    //cout<<"length "<<length<<endl;
    for(i=1; i<length; i++)
    {
        add=0;
        carry=0;
        a.clear();
        a=b;
        m=a.length();
        n=line[i].size();
        maxi=max(m,n);
        b.clear();
        //cout<<a<<" "<<line[i]<<endl;
        for(j=0; j<maxi; j++)
        {
            add=0;
            if(j<m)
            {
                add+=a[j]-'0';
            }
            if(j<n)
            {
                add+=line[i][j]-'0';
            }
            add+=carry;
            carry=0;
            if(add>=10)
            {
                carry=add/10;
                add%=10;
            }
            //cout<<maxi<<" "<<j<<" "<<add<<" "<<carry<<" "<<a[j]<<" "<<line[i][j]<<endl;
            tempchar=add+'0';
            b.push_back(tempchar);
            //cout<<maxi<<" "<<j<<" "<<add<<" "<<carry<<" "<<a[j]<<" "<<line[i][j]<<endl;
        }
        if(carry>0)
        {
            b.push_back(carry+'0');
        }
        //cout<<endl;
    }
    length=b.length();
    for(i=length-1; i>=0; i--)
    {
        cout<<b[i];
    }
    cout<<endl;
    return 0;
}
