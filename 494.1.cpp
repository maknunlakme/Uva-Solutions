#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string line;
    char lines[100000];
    int i,j,words,length;
    {
        while(getline(cin,line))
        {
            strcpy(lines, line.c_str());
            length = line.length();
            words = 0;
            lines[length+1] = '\0';
            for(i=0;i<length;i++)
            {
                if(lines[i]<='z'&&lines[i]>='a'||lines[i]<='Z'&&lines[i]>='A')
                {
                    for(j=i;line[j]!=32;j++)
                    {
                        cout<<"loop j "<<j<<endl;
                    }
                    words++;
                    i += j-2;
                    cout<<"word: "<<words<<" i "<<i<<" j "<<j<<endl;
                }
            }
            cout<<words<<endl;
        }
    }

    return 0;
}
