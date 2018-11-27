#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char line[40];
    int length,i;
    while(cin>>line)
    {
        length = strlen(line);
        for(i=0;i<length;i++)
        {
            if(line[i]=='A'||line[i]=='B'||line[i]=='C')
            {
                line[i] = '2';
            }
            else if(line[i]=='D'||line[i]=='E'||line[i]=='F')
            {
                line[i] = '3';
            }
            else if(line[i]=='G'||line[i]=='H'||line[i]=='I')
            {
                line[i] = '4';
            }
            else if(line[i]=='J'||line[i]=='K'||line[i]=='L')
            {
                line[i] = '5';
            }
            else if(line[i]=='M'||line[i]=='N'||line[i]=='O')
            {
                line[i] = '6';
            }
            else if(line[i]=='P'||line[i]=='Q'||line[i]=='R'||line[i]=='S')
            {
                line[i] = '7';
            }
            else if(line[i]=='T'||line[i]=='U'||line[i]=='V')
            {
                line[i] = '8';
            }
            else if(line[i]=='W'||line[i]=='X'||line[i]=='Y'||line[i]=='Z')
            {
                line[i] = '9';
            }
        }
        cout<<line<<endl;
    }
}
