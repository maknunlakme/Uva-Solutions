#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{
    string line,linetemp;
    int length,newlength,counter;
    while(1)
    {
        cin>>line;
        counter=1;
        if(line=="END")
        {
            break;
        }
        length=line.length();
        cout<<"length :"<<length<<endl;
        if(length==1)
        {
            cout<<1<<endl;
        }
        else
        {
            while(1)
            {
                ostringstream temp;
                temp<<length;
                linetemp=temp.str();
                newlength=linetemp.length();
                cout<<"newlength :"<<newlength<<endl;
                if(length==newlength)
                {
                    break;
                }
                else
                {
                    counter++;
                    length=newlength;
                }
            }
            cout<<"counter: "<<counter<<endl;
        }
    }
    return 0;
}
