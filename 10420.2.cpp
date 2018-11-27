#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

map<string,int>mark;

int main()
{
    string line,country;
    int test;
    cin>>test;
    getchar();
    while(test--)
    {
        getline(cin,line);
        stringstream s(line);
        s>>country;
        mark[country]++;
    }
    for(auto it:mark)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
