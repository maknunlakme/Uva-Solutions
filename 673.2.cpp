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

        while(!parentheses.empty())
        {
            if(parentheses.front()==parentheses.back())
            {
                parentheses.pop_front();
                parentheses.pop_back();
                cout<<"1"<<endl;
            }
            else if(parentheses.front()==parentheses[1])
            {
                parentheses.pop_front();
                parentheses.pop_front();
                cout<<"2"<<endl;
            }
            else
            {
                int dsize = parentheses.size();
                cout<<"3"<<endl;
                if(parentheses.back()==parentheses[dsize-2])
                {
                    parentheses.pop_back();
                    parentheses.pop_back();
                    cout<<"4"<<endl;
                }
            }
        }
        if(parentheses.empty()==0)
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
