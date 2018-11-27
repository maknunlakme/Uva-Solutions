#include<iostream>
#include<cstring>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{
    char line[1001000],linetemp[1001000];
    int length,counter,newlength;
    while(1)
    {
        scanf("%s",line);
        counter=0;
        if(strcmp(line,"END")==0)
        {
            break;
        }
        else
        {

            while(1)
            {
                length=strlen(line);
                //cout<<"length: "<<length<<endl;
                sprintf(linetemp,"%d",length);
                //cout<<"linetemp :"<<linetemp<<endl;
                counter++;
                if(strcmp(line,linetemp)==0)
                {
                    break;
                }
                else
                {
                    strcpy(line,linetemp);
                }
            }
            cout<<counter<<endl;
        }
    }
    return 0;
}
