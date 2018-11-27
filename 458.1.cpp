#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string string_line;
    char char_line[100000];
    char char_copy[100000];
    int i,length;
    {
        while(cin>>string_line)
        {
            strcpy(char_line, string_line.c_str());
            length = strlen(char_line);
            for(i=0;i<length;i++)
            {
                char_copy[i] = char_line[i]-7;
            }
            char_copy[i] = '\0';
            cout<<char_copy<<endl;
        }
    }
    return 0;
}
