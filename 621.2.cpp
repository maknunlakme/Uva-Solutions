#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long int test;
    char code[100000];
    long int length;
    cin>>test;
    while(test!=0)
    {
        cin>>code;
        length = strlen(code);
        if(strcmp(code,"1")==0||strcmp(code,"4")==0||strcmp(code,"78")==0)
        {
            cout<<"+"<<endl;
        }
        else if(code[length-1]=='5'&&code[length-2]=='3')
        {
            cout<<"-"<<endl;
        }
        else if(code[length-1]=='4'&&code[0]=='9')
        {
            cout<<"*"<<endl;
        }
        else if(code[0]=='1'&&code[1]=='9'&&code[2]=='0')
        {
            cout<<"?"<<endl;
        }
        test--;
    }
    return 0;
}
