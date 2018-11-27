#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    int i,length,total;
    while(1)
    {
        cin>>line;
        if(line=="0")
        {
            break;
        }
        length=line.length();
        total=0;
        for(i=0;i<length;i++)
        {
            if(i%2==0)
            {
                total+=line[i]-'0';
            }
            else
            {
                total-=line[i]-'0';
            }
        }
        if(total%11==0)
        {
            cout<<line<<" is a multiple of 11."<<endl;
        }
        else
        {
            cout<<line<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}
