#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int check(string n)
{
    int i,length;
    length=n.length();
    for(i=0;i<length;i++)
    {
        if(n[i]<'A'&&n[i]>'Z')&&(n[i]<'a'&&n[i]>'z')
        {
            return 0;
        }
    }
}

int main()
{
    string temp,word;
    int i,length;
    while(1)
    {
        cin>>temp;
        if(temp=="E-N-D")
        {
            break;
        }
        if(temp.length()>word.length())
        {
            word=temp;
        }
    }
    length=word.length();
    for(i=0; i<length; i++)
    {
        putchar (tolower(word[i]));
    }
    cout<<endl;
    return 0;
}
