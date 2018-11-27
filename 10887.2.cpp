#include<iostream>
#include<set>
#include<string>
#include<limits>
using namespace std;
int main()
{
    int test;
    int countcase=0;
    cin>>test;
    while(test--)
    {
        int m,n;
        string mstring[1510],nstring[1510],temp;
        set<string>concatstring;
        cin>>m>>n;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        for(int i=0;i<m;i++)
        {
            getline(cin,mstring[i]);
        }
        for(int i=0;i<n;i++)
        {
            getline(cin,nstring[i]);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp = mstring[i] + nstring[j];
                concatstring.insert(temp);
            }
        }
        int stringsize=concatstring.size();
        countcase++;
        cout<<"Case "<<countcase<<": "<<stringsize<<endl;
    }
    return 0;
}
