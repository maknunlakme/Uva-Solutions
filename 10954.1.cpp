#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n,cost,i,temp,a,b;
    while(1)
    {
        priority_queue<int>q;
        cost=0;
        cin>>n;
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            cin>>temp;
            q.push(temp*(-1));
        }
        while(q.size()>1)
        {
            a=q.top()*(-1),q.pop();
            b=q.top()*(-1),q.pop();
            cost+=a+b;
            //cerr<<"AA "<<a<<" "<<b<<endl;
            q.push((a+b)*(-1));
        }
        cout<<cost<<endl;
    }
    return 0;
}
