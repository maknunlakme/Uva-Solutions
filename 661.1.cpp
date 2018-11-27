#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,c,temp,i,total,turn,maxi,counter=0;
    vector<int>consumption;
    bool fuse=false;
    while(1)
    {
        cin>>n>>m>>c;
        vector<bool>machine(30,0);
        fuse=false;
        if(n==0&&m==0&&c==0)
        {
            break;
        }
        else
        {
            total=0;
            maxi=0;
            for(i=0; i<n; i++)
            {
                cin>>temp;
                consumption.push_back(temp);
            }
            for(i=0; i<m; i++)
            {
                cin>>turn;
                if(machine[turn-1]==false)
                {
                    total+=consumption[turn-1];
                    //cout<<"total f :"<<total<<" "<<consumption[turn-1]<<endl;
                    machine[turn-1]=true;
                    if(total>maxi)
                    {
                        maxi=total;
                    }
                    if(total>c)
                    {
                        fuse=true;
                        //cout<<"why"<<endl;
                    }
                }
                else
                {
                    total-=consumption[turn-1];
                    //cout<<"total t :"<<total<<" "<<consumption[turn-1]<<endl;
                    machine[turn-1]=false;
                }
            }
            counter++;
            if(fuse==true)
            {
                cout<<"Sequence "<<counter<<endl;
                cout<<"Fuse was blown."<<endl;
            }
            else
            {
                cout<<"Sequence "<<counter<<endl;
                cout<<"Fuse was not blown."<<endl;
                cout<<"Maximal power consumption was "<<maxi<<" amperes."<<endl;
            }
            consumption.clear();
            cout<<endl;
        }
    }
    return 0;
}
