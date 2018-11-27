#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    char line[10];
    int first,last,test,temp;
    cin>>test;
    while(test--)
    {
        cin>>line;
        first=((line[0]-'A')*26*26)+((line[1]-'A')*26)+(line[2]-'A');
        temp=line[4]-'0';
        last=temp*1000;
        temp=line[5]-'0';
        last+=temp*100;
        temp=line[6]-'0';
        last+=temp*10;
        last+=line[7]-'0';
        if(abs(first-last)<=100)
        {
            cout<<"nice"<<endl;
        }
        else
        {
            cout<<"not nice"<<endl;
        }
    }
    return 0;
}
