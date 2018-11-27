#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,string>slogan;
    int test,query,i;
    string temp1,temp2;
    cin>>test;
    cin.get();
    for(i=0;i<test;i++)
    {
        getline(cin,temp1);
        getline(cin,temp2);
        slogan[temp1]=temp2;
    }
    cin>>query;
    cin.get();
    for(i=0;i<query;i++)
    {
        getline(cin,temp1);
        cout<<slogan[temp1]<<endl;
    }
    return 0;
}
