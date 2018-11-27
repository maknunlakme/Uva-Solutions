#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    char code[100][50];
    int codelength[100];
    int i,j,count_i,count_j;
    int first, last;
    first = 0;
    last =0;
    bool successor;
    successor = false;
    for(i=0,count_i=0; ;i++,count_i++)
    {
        cin>>code[i];
        fflush(stdin);
        codelength[i] = strlen(code[i]);
        cout<<codelength[i]<<endl;
        if(code[i][0]=='#')
        {
            break;
            cout<<"doing"<<endl;
        }
    }
    for(i=0;i<count_i;i++)
    {
        cout<<code[i]<<endl;
        last += codelength[i];
        cout<<last<<endl;
        successor = next_permutation(code+first, code+last);
        first = last;
        cout<<"successor "<<successor<<endl;
        cout<<code[i]<<"*****"<<endl;
    }
    for(i=0;i<count_i;i++)
    {
        for(j=0;code[i][j]!='\0';j++)
        {
            printf("%c", code[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    /*for(i=0,last=0;i<count_i;i++)
    {
        last += codelength[i];
        cout<<code[i]<<"*****"<<endl;
        successor = next_permutation(code+first, code+last);
        first = last;

    }
    return 0;
}
{
    int i;
   char code[5][6];
   for(i=0;i<5;i++)
   {
        cin>>code[i];
        fflush(stdin);
   }
   cout<<code[3]<<endl;
    return 0;
}*/
