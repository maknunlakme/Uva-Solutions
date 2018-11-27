#include<bits/stdc++.h>
using namespace std;

string multiply( string a, int b )
{
    // a contains the biginteger in reversed form
    //cerr<<"BB "<<a<<" "<<b<<endl;
    int carry = 0;
    bool nega=false,negb=false;
    if(a[0]=='-')
    {
        nega=true;
        a.erase(a.begin());
    }
    if(b<0)
    {
        negb=true;
        b*=(-1);
    }
    //cerr<<"CC "<<a<<" "<<b<<endl;
    for(int i=0; i < a.size(); i++ )
    {
        carry += (a[i] - 48) * b;
        a[i] = ( carry % 10 + 48 );
        carry /= 10;
    }
    while( carry )
    {
        a += ( carry % 10 + 48 );
        carry /= 10;
    }
    //cerr<<"AA "<<a<<endl;
    if((nega==true and negb==false) or (nega==false and negb==true))
    {
        a.insert(0,1,'-');
    }
    return a;
}

string maxx(string a,string b)
{
    bool nega=false,negb=false;
    if(a[0]=='-') nega=true;
    if(b[0]=='-') negb=true;
    if(nega==true and negb==false) return b;
    if(nega==false and negb==true) return a;
    int lengtha=a.size();
    int lengthb=b.size();
    int i;
    if(nega==false and negb==false)
    {
        if(lengtha>lengthb) return a;
        if(lengthb>lengtha) return b;
        for(i=lengtha-1; i>=0; i--)
        {
            if(a[i]>b[i]) return a;
            if(b[i]>a[i]) return b;
        }
        return a;
    }
    if(nega==true and negb==true)
    {
        if(lengtha>lengthb) return b;
        if(lengthb>lengtha) return a;
        for(i=lengtha-1; i>=0; i--)
        {
            if(a[i]>b[i]) return b;
            if(b[i]>a[i]) return a;
        }
        return a;
    }
}

int arr[200];

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n,length,i,j,counter;
    string answer,maxi;
    while(cin>>n)
    {
        counter=0;
        arr[counter++]=n;
        while(1)
        {
            cin>>n;
            if(n==-999999) break;
            arr[counter++]=n;
        }
        length=counter;
        maxi=multiply("1",arr[0]);
        //cout<<"M "<<maxi<<endl;
        for(i=0; i<length; i++)
        {
            answer=multiply("1",arr[i]);
            maxi=maxx(maxi,answer);
            //cerr<<"DD "<<answer<<" "<<maxi<<endl;
            for(j=i+1; j<length; j++)
            {
                answer=multiply(answer,arr[j]);
                maxi=maxx(maxi,answer);
                //cerr<<maxi<<" "<<answer<<endl;
            }
        }
        if(maxi[0]=='-')
        {
            maxi.erase(maxi.begin());
            reverse(maxi.begin(),maxi.end());
            maxi.insert(0,1,'-');
        }
        else reverse(maxi.begin(),maxi.end());
        cout<<maxi<<endl;
    }
    return 0;
}
