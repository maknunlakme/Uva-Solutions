#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char line[10];
    int counter = 0;
    while(1)
    {
        cin>>line;
        counter++;
        if(strcmp(line,"*")==0)
        {
            break;
        }
        else if(strcmp(line,"Hajj")==0)
        {
            cout<<"Case "<<counter<<": Hajj-e-Akbar"<<endl;
        }
        else if(strcmp(line,"Umrah")==0)
        {
            cout<<"Case "<<counter<<": Hajj-e-Asghar"<<endl;
        }
    }
    return 0;
}
