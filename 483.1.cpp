#include<iostream>
#include<cstring>
#include<cstdio>
#define X 100000
using namespace std;
int main()
{
    char  line[X],reversed[X],total[X];
    while(gets(line))
    {
        memset(total,0,X);
        int length=strlen(line);
        int last=0;
        int i,k,temp;
        for(i=0;i<length;i++)
        {
            memset(reversed,0,X);
            if(line[i]==' '||line[i]=='\0')
            {
                temp=last;
                last = i+1;
                k=0;
                for(int j=i-1;j>=temp;j--,k++)
                {
                    reversed[k]=line[j];
                }
                reversed[k]=' ';
                reversed[k+1]='\0';
                strcat(total,reversed);
            }
        }
        memset(reversed,0,X);
        for(int j=length-1,k=0;j>=last;j--,k++)
        {
            reversed[k]=line[j];
        }
        strcat(total,reversed);
        cout<<total<<endl;
    }
    return 0;
}
