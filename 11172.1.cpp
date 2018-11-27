#include<iostream>
using namespace std;
int main()
{
    int test;
    unsigned T1,T2;
    char cases[20];
    int i,j;
    cin>>test;
    i=0;
    while(test!=0)
    {
        cin>>T1;
        cin>>T2;
        if(T1==T2)
        {
            cases[i]='=';
        }
        else if(T1>T2)
        {
            cases[i]='>';
        }
        else if(T1<T2)
        {
            cases[i]='<';
        }
        i++;
        test--;
    }
    for(j=0;j<i;j++)
    {
        cout<<cases[j]<<endl;
    }
    return 0;
}
