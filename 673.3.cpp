#include<iostream>
#include<stack>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.get();
    while(test--)
    {
        char line[200];
        stack<char>p;
        bool okay = true;
        gets(line);
        int length=strlen(line);
        for(int i=0;i<length;i++)
        {
            if(line[i]=='('||line[i]=='[')
            {
                p.push(line[i]);
                //cout<<"1"<<endl;
            }
            else if(line[i]==')')
            {
                if(!p.empty())
                {
                    if(p.top()=='(')
                    {
                        p.pop();
                        //cout<<"2"<<endl;
                    }
                    else
                    {
                        okay = false;
                        break;
                    }
                }
                else
                {
                    okay = false;
                    break;
                }
            }
            else if(line[i]==']')
            {
                if(!p.empty())
                {
                    if(p.top()=='[')
                    {
                        p.pop();
                        ///cout<<"3"<<endl;
                    }
                    else
                    {
                        okay = false;
                        break;
                    }
                }
                else
                {
                    okay = false;
                    break;
                }
            }
        }
        if(okay==true&&p.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

