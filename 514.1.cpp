#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,temp,i;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        while(1)
        {
            cin>>temp;
            stack<int>st;
            if(temp==0) break;
            st.push(temp);
            for(i=1; i<n; i++)
            {
                cin>>temp;
                cerr<<"i "<<temp<<" "<<st.top();
                while(temp>st.top())
                {
                    st.pop();
                }
                st.push(temp);
            }
            while(!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
            }
            if(!st.empty())
            {
                cout<<"no"<<endl;
            }
            else
            {
                cout<<"yes"<<endl;
            }
        }
    }
    return 0;
}
