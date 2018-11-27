#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
    list<char>line;
    list<char>::iterator it;
    string text;
    int length,i;
    while(cin>>text)
    {
        length=text.length();
        it=line.begin();
        for(i=0;i<length;i++)
        {
            if(text[i]=='[')
            {
                it=line.begin();
            }
            else if(text[i]==']')
            {
                it=line.end();
            }
            else
            {
                line.insert(it,text[i]);
            }
        }
        for(it=line.begin();it!=line.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
        line.clear();
    }
    return 0;
}
