#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word[10];
    long long money,temp_money;
    int test;
    money = 0;
    cin>>test;
    while(test!=0)
    {
        cin>>word;
        if(strcmp(word, "donate")==0)
        {
            cin>>temp_money;
            money += temp_money;
        }
        else
        {
            cout<<money<<endl;
        }
        test--;
    }
    return 0;
}
