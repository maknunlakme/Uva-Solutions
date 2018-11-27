#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    int quote_place;
    bool quote = false;
    while(getline(cin,line))
    {
        quote_place = line.find('"');
        while(quote_place<line.size())
        {
            if(quote==false)
            {
                line.replace(quote_place,1,"``");
                quote = true;
            }
            else
            {
                line.replace(quote_place,1,"''");
                quote = false;
            }
            quote_place = line.find('"');
        }
        cout<<line<<endl;
    }
    return 0;
}
