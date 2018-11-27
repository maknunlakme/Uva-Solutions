#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test,i,j,loops;
    cin>>test;
    loops=test/16 + 1;
    string guest[110];
    for(i=0;i<test;i++)
    {
        cin>>guest[i];
    }
    j = -1;
    for(i=0;i<loops;i++)
    {
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": Happy"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": birthday"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": to"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": you"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": Happy"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": birthday"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": to"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": you"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": Happy"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": birthday"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": to"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": Rujia"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": Happy"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": birthday"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": to"<<endl;
        if(j==test-1)
            j=0;
        else
            j++;
        cout<<guest[j]<<": you"<<endl;
    }
}
