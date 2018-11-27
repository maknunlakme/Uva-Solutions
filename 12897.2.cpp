#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test!=0)
    {
        string line;
        cin>>line;
        int replaced;
        cin>>replaced;
        int length = line.length();
        for(int i=0;i<replaced;i++)
        {
            string temp1,temp2;
            cin>>temp1>>temp2;
            int found = line.find(temp2);
            while(found<length&&found>=0)
            {
                line.replace(found,1,temp1);
                found = line.find(temp2);
            }
        }
        cout<<line<<endl;
        test--;
    }
    return 0;
}
