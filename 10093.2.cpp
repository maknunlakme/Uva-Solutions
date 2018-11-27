#include<iostream>
#include<string>
#include<cmath>
using namespace std;

long long int baseconvert(int from, int to, string line)
{
    long long int length=line.length();
    string result;
    char tempchar;
    long long int i,j,total=0,temp,rem;
    for(i=length-1,j=0; i>-1; i--,j++)
    {
        if(line[i]>='0'&&line[i]<='9')
        {
            temp=line[i]-'0';
        }
        else if(line[i]>='A'&&line[i]<='Z')
        {
            temp=line[i]-'7';
        }
        else if(line[i]>='a'&&line[i]<='z')
        {
            temp=line[i]-'=';
        }
        if(temp>=from)
        {
            return -1;
        }
        total+=temp;
        //cout<<"total : "<<total<<endl;

    }
    return total;
}

int main()
{
    string number;
    long long int temp,base,i;
    while(cin>>number)
    {
        base=0;
        if(number[0]=='+')
        {
            number.erase(0,1);
        }
        else if(number[0]=='-')
        {
            number.erase(0,1);
        }
        for(i=2;i<=62;i++)
        {
            temp=baseconvert(i,10,number);
            //cout<<"temp : "<<temp<<endl;
            if(temp>-1&&temp%(i-1)==0)
            {
                base=i;
                break;
            }
        }
        if(base==0)
        {
            cout<<"such number is impossible!"<<endl;
        }
        else
        {
            cout<<base<<endl;
        }
    }
    return 0;
}
