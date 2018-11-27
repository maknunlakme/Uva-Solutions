#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        bool fixed=true;
        int y1,y2,n,gap;
        cin>>n;
        if(n!=0)
        {
            cin>>y1>>y2;
            gap=abs(y1-y2);
            for(int i=1;i<n;i++)
            {
                cin>>y1>>y2;
                if(abs(y1-y2)!=gap)
                {
                    fixed=false;
                }
            }
            if(fixed==true)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
            if(test!=0)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
