#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    while(1)
    {
        cin>>line;
        int length,i,number,degree,temp,total;
        if(line=="0")
        {
            break;
        }
        length=line.length();
        number=0;
        for(i=0; i<length; i++)
        {
            number+=(line[i]-'0');
        }
        degree=1;
        while(number>10)
        {
            temp=number;
            total=0;
            while(temp>0)
            {
                total+=temp%10;
                temp/=10;
            }
            number=total;
            degree++;
        }
        //cout<<"Num "<<number<<endl;
        if(number==9)
        {
            cout<<line<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
        }
        else
        {
            cout<<line<<" is not a multiple of 9."<<endl;
        }
    }
    return 0;
}
