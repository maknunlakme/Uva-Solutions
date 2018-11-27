#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string line;
    char lines[10000];
    int i,j,length,words;
    while(getline(cin, line))
    {
        words = 0;
        strcpy(lines, line.c_str());
        length = line.length();
        for(i=0;i<length;i++)
        {
            if(lines[i]<='z'&&lines[i]>='a'||lines[i]<='Z'&&lines[i]>='A')
            {
                if(lines[i+1]<='z'&&lines[i+1]>='a'||lines[i+1]<='Z'&&lines[i+1]>='A')
                {

                }
                else
                {
                    words++;
                    i++;
                }
            }
        }
        cout<<words<<endl;
    }
    return 0;
}
