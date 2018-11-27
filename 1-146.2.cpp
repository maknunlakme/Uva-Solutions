#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    int i,j,count_i;
    char code[50];
    char codes[10000][50];
    bool successor[10000];
    int codelength;
    for(i=0,count_i=0; ;i++,count_i++)
    {
        cin>>code;
        fflush(stdin);
        if(code[0]=='#')
        {
            break;
        }
        codelength = strlen(code);
        successor[i] = next_permutation(code, code+codelength);
        for(j=0;j<codelength;j++)
        {
            codes[i][j] = code[j];
        }
    }
    for(i=0;i<count_i;i++)
    {
        if(successor[i]== true)
        {
            cout<<codes[i]<<endl;
        }
        else if(successor[i]==false)
        {
            cout<<"No Successor"<<endl;
        }
    }
    return 0;
}
