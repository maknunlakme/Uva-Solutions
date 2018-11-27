#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int test,length,digits,i,j,k,counter;
    char charecter;
    char line[210];
    char output[10000];
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        k = 0;
        cin>>line;
        length = strlen(line);
        for(i=0;i<length;i++)
        {
            charecter = line[i];
            i++;
            digits = 0;
            while(line[i]>=48&&line[i]<=57)
            {
                digits = digits*10 + (line[i]-48);
                i++;
            }
            i--;
            for(j=0;j<digits;j++,k++)
            {
                output[k]=charecter;
            }
        }
        output[k] = '\0';
        counter++;
        cout<<"Case "<<counter<<": "<<output<<endl;
        test--;
    }
    return 0;
}
