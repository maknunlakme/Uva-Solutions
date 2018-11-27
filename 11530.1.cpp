#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int test,counter,length,i,type;
    char line[110];
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        type = 0;
        counter++;
        getchar();
        cin.get(line,110);
        length = strlen(line);
        for(i=0;i<length;i++)
        {
            if(line[i]=='a'||line[i]=='d'||line[i]=='g'||line[i]=='j'||line[i]=='m'||line[i]=='p'||line[i]=='t'||line[i]=='w'||line[i]==' ')
            {
                type++;
            }
            else if(line[i]=='b'||line[i]=='e'||line[i]=='h'||line[i]=='k'||line[i]=='n'||line[i]=='q'||line[i]=='u'||line[i]=='x')
            {
                type+=2;
            }
            else if(line[i]=='c'||line[i]=='f'||line[i]=='i'||line[i]=='l'||line[i]=='o'||line[i]=='r'||line[i]=='v'||line[i]=='y')
            {
                type+=3;
            }
            else if(line[i]=='s'||line[i]=='z')
            {
                type+=4;
            }

        }
        cout<<"Case #"<<counter<<": "<<type<<endl;
        test--;
    }
    return 0;
}
