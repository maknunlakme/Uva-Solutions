#include<iostream>
#include<string>
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
            char temp1,temp2;
            cin>>temp1>>temp2;
            for(int j=0;j<length;j++)
            {
                if(line[j]==temp2)
                {
                    line[j]=temp1;
                }
            }
        }
        cout<<line<<endl;
        test--;
    }
    return 0;
}
