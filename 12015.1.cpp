#include<iostream>
#include<string>
using namespace std;
int main()
{
    string web[10];
    int relevance[10],test,i,maxi,counter;
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        maxi = 0;
        for(i=0;i<10;i++)
        {
            cin>>web[i];
            cin>>relevance[i];
            if(maxi<relevance[i])
            {
                maxi = relevance[i];
            }
        }
        counter++;
        cout<<"Case #"<<counter<<":"<<endl;
        for(i=0;i<10;i++)
        {
            if(maxi==relevance[i])
            {
                cout<<web[i]<<endl;
            }
        }
        test--;
    }
    return 0;
}
