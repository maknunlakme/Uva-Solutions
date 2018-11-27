#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct node
{
    int a,b;
    string name;
};

bool compare(node x,node y)
{
    if(x.a==y.a)
    {
        if(x.b==y.b)
        {
            return x.name<y.name;
        }
        else
        {
            return x.b<y.b;
        }
    }
    else
    {
        return x.a>y.a;
    }
}

bool compare2(node x,node y)
{
    return x.name<y.name;
}

vector<node>arr,p,q;

int main()
{
    #ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,i,t;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        arr.clear();
        p.clear();
        q.clear();
        node temp;
        for(i=0;i<10;i++)
        {
            cin>>temp.name>>temp.a>>temp.b;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end(),compare);
        for(i=0;i<5;i++) p.push_back(arr[i]);
        for(i=5;i<10;i++) q.push_back(arr[i]);
        sort(p.begin(),p.end(),compare2);
        sort(q.begin(),q.end(),compare2);
        cout<<"Case "<<t<<":"<<endl;
        cout<<"("<<p[0].name;
        for(i=1; i<p.size(); i++)
        {
            cout<<", "<<p[i].name;
        }
        cout<<")"<<endl;
        cout<<"("<<q[0].name;
        for(i=1; i<q.size(); i++)
        {
            cout<<", "<<q[i].name;
        }
        cout<<")"<<endl;
    }
    return 0;
}
