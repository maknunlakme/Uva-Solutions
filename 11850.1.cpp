#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int test,temp,last,i;
    bool possible;
    vector<int>mile;
    while(1)
    {
        cin>>test;
        possible=true;
        if(test==0)
        {
            break;
        }
        for(i=0; i<test; i++)
        {
            cin>>temp;
            mile.push_back(temp);
        }
        sort(mile.begin(),mile.end());
        last=1422-mile[test-1];
        //cout<<"last : "<<last<<" "<<mile[test-1]<<endl;
        if((last*2)>200)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            for(i=0;i<test-1;i++)
            {
                if((mile[i+1]-mile[i])>200)
                {
                    //cout<<"breaking"<<endl;
                    possible=false;
                    break;
                }
            }
            if(possible==true)
            {
                cout<<"POSSIBLE"<<endl;
            }
            else
            {
                cout<<"IMPOSSIBLE"<<endl;
            }
        }
        mile.clear();
    }
    return 0;
}
