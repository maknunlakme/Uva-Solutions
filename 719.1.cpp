#include<iostream>
#include<string>
#include<cstdio>
#define X 1000100
#define MOD 1000000007
using namespace std;

string text,pattern,mini;

int main()
{
    long long int test,i,value,counter,minic,textlength;
    cin>>test;
    while(test--)
    {
        cin>>text;
        counter=1;
        pattern.clear();
        pattern=text;
        mini=text;
        minic=1;
        //cerr<<"PPPPPP "<<pattern<<endl;
        pattern.push_back(pattern[0]);
        pattern.erase(pattern.begin());
       // cerr<<"PP "<<pattern<<endl;
        while(pattern!=text)
        {
            counter++;
            if(mini>pattern)
            {
                mini=pattern;
                minic=counter;
            }
            pattern.push_back(pattern[0]);
            pattern.erase(pattern.begin());
        }
        cout<<minic<<endl;
    }
    return 0;
}
