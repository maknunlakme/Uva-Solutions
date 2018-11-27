#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test,six,num1,num2,num3,sum;
    string s1,s2,s3;
    cin>>test;
    cout<<"COWCULATIONS OUTPUT"<<endl;
    while(test--)
    {
        cin>>temp;
        num1=(temp[0]-'0')*10000+(temp[1]-'0')*1000+(temp[2]-'0')*100+(temp[3]-'0')*10+(temp[4]-'0');
        temp.clear();
        cin>>temp;
        num2=(temp[0]-'0')*10000+(temp[1]-'0')*1000+(temp[2]-'0')*100+(temp[3]-'0')*10+(temp[4]-'0');
        temp.clear();
        cin>>temp;
        if(temp=="A")
        {
            sum=num1+num2;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
