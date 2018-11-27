#include<iostream>
#include<stack>
#define X 1010
using namespace std;

int arr[X];

int main()
{
    int n,i,blah;
    bool yes;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        while(1)
        {
            cin>>arr[0];
            if(arr[0]==0)
                break;
            blah=0;
            stack<int>st;
            yes=true;
            for(i=1; i<n; i++)
            {
                cin>>arr[i];
            }
            for(i=1; i<=n; i++)
            {
                if(!st.empty())
                {
                    //cerr<<"11111"<<endl;
                    if(arr[blah]==st.top())
                    {
                        //cerr<<"ST "<<1<<endl;
                        st.pop();
                        blah++;
                    }
                    else if(arr[blah]==i)
                    {
                        //cerr<<"ST "<<2<<endl;
                        blah++;
                    }
                    else
                    {
                        //cerr<<"ST "<<3<<endl;
                        cerr<<"CCC "<<blah<<" "<<arr[blah]<<" "<<i<<endl;
                        st.push(i);
                    }
                }
                else if(arr[blah]==i)
                {
                    //cerr<<"2222"<<endl;
                    blah++;
                }
                else
                {
                    //cerr<<"3333"<<endl;
                    st.push(i);
                }
                cerr<<"AA "<<i<<" "<<blah<<" "<<st.top()<<endl;
            }
            while(!st.empty() and blah<n)
            {
                if(arr[blah]==st.top())
                {
                    st.pop();
                    blah++;
                }
                else
                {
                    cerr<<"DDD "<<blah<<" "<<arr[blah]<<" "<<st.top()<<endl;
                    yes=false;
                    break;
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
        cout<<endl;
    }
    return 0;
}
