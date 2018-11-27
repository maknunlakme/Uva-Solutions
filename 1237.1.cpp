#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test,data,query,low[10100],high[10100],n,counter,name,i,j;
    string company[10100];
    cin>>test;
    while(test--)
    {
        cin>>data;
        for(i=0;i<data;i++)
        {
            cin>>company[i]>>low[i]>>high[i];
        }
        cin>>query;
        for(i=0;i<query;i++)
        {
            cin>>n;
            counter=0;
            for(j=0;j<data;j++)
            {
                if(n>=low[j]&&n<=high[j])
                {
                    counter++;
                    name=j;
                }
            }
            if(counter==1)
            {
                cout<<company[name]<<endl;
            }
            else
            {
                cout<<"UNDETERMINED"<<endl;
            }
        }
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
