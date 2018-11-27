#include<iostream>
#include<deque>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    getchar();
    deque<char>parentheses;
    while(test!=0)
    {
        bool balance = true;
        char temp[150];
        gets(temp);
        int length = strlen(temp);
        for(int j=0;j<length;j++)
        {
            parentheses.push_back(temp[j]);
        }
        for(int j=0;j<length;j++)
        {
            if(parentheses[j]==' ')
            {
                parentheses.erase(parentheses.begin()+(j-1));
                length--;
                j--;
            }
        }
        for(int j=0;j<length;j++)
        {
            if(parentheses[j]=='(')
            {
                if(parentheses[j+1]!=')'&&parentheses[length-1]!=')')
                {
                    balance=false;
                    break;
                }
                else
                {
                    parentheses.pop_front();
                    if(parentheses[j+1]==')')
                    {
                        parentheses.pop_front();
                    }
                    else
                    {
                        parentheses.pop_back();
                    }
                    length-=2;
                    j-=2;
                }
            }
            else if(parentheses[j]=='[')
            {
                if(parentheses[j+1]!=']'&&parentheses[length-1]!=')]')
                {
                    balance=false;
                    break;
                }
                else
                {
                    parentheses.pop_front();
                    if(parentheses[j+1]==')')
                    {
                        parentheses.pop_front();
                    }
                    else
                    {
                        parentheses.pop_back();
                    }
                }
                length-=2;
                j-=2;
            }
        }
        if(balance==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        test--;
    }
    return 0;
}

