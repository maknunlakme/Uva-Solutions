#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    long long int counter=0,length,temp,i,temp2;
    string year;
    while(cin>>year)
    {
        length=year.length();
        bool leapyear=false;
        if(counter!=0)
        {
            printf("\n");
        }
        int flag=0;
        temp=year[length-1]-'0';
        temp+=10*(year[length-2]-'0');
        temp2=year[length-3]-'0';
        temp2+=10*(year[length-4]-'0');
        //cout<<"1 "<<temp<<endl;
        if((temp%4==0&&year[length-1]!='0'&&year[length-2]!='0')||(temp2%4==0))
        {
            printf("This is leap year.\n");
            flag++;
            leapyear=true;
        }
        temp=0;
        for(i=0;i<length;i++)
        {
            temp+=year[i]-'0';
        }
        //cout<<"2 "<<temp<<" "<<year[length-1]<<endl;
        if((temp==0||temp%3==0)&&(year[length-1]=='5'||year[length-1]=='0'))
        {
            printf("This is huluculu festival year.\n");
            flag++;
        }
        temp=0;
        for(i=0;i<length;i++)
        {
            if(i%2==0)
            {
                temp+=year[i]-'0';
            }
            else
            {
                temp-=year[i]-'0';
            }
        }
        //cout<<"3 "<<temp<<" "<<year[length-1]<<endl;
        if(((temp==0)||temp%11==0)&&(year[length-1]=='5'||year[length-1]=='0')&&leapyear==true)
        {
            printf("This is bulukulu festival year.\n");
            flag++;
        }
        if(flag==0)
        {
            printf("This is an ordinary year.\n");
        }
        counter++;
    }
    return 0;
}
