#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string line;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>line;
        sort(line.begin(),line.end());
        cout<<line<<endl;
        while(next_permutation(line.begin(),line.end()))
        {
            cout<<line<<endl;
        }
        cout<<endl;
    }
    return 0;
}
