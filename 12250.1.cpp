#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char line[20];
    int counter = 0;
    while(1)
    {
        cin>>line;
        counter++;
        if(strcmp(line,"#")==0)
        {
            break;
        }
        else if(strcmp(line,"HELLO")==0)
        {
            cout<<"Case "<<counter<<": ENGLISH"<<endl;
        }
        else if(strcmp(line,"HOLA")==0)
        {
            cout<<"Case "<<counter<<": SPANISH"<<endl;
        }
        else if(strcmp(line,"HALLO")==0)
        {
            cout<<"Case "<<counter<<": GERMAN"<<endl;
        }
        else if(strcmp(line,"BONJOUR")==0)
        {
            cout<<"Case "<<counter<<": FRENCH"<<endl;
        }
        else if(strcmp(line,"CIAO")==0)
        {
            cout<<"Case "<<counter<<": ITALIAN"<<endl;
        }
        else if(strcmp(line,"ZDRAVSTVUJTE")==0)
        {
            cout<<"Case "<<counter<<": RUSSIAN"<<endl;
        }
        else
        {
            cout<<"Case "<<counter<<": UNKNOWN"<<endl;
        }
    }
    return 0;
}
