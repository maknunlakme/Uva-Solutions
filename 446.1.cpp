#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
string baseconvert(int from, int to, string line)
{
    int length=line.length();
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
        if(temp>=from)
        {
            return "blank";
        }
        total+=ceil(temp*pow(from,j));
    }
    if(total>0)
    {
        if(to<10)
        {
            while(total!=0)
            {
                rem=total%to;
                total/=to;
                tempchar=rem+'0';
                result.insert(0,1,tempchar);
            }
        }
        else
        {
            while(total!=0)
            {
                rem=total%to;
                total/=to;
                if(rem>9)
                {
                    tempchar=rem+'7';
                }
                else
                {
                    tempchar=rem+'0';
                }
                result.insert(0,1,tempchar);
            }
        }
    }
    if(result.size()==0)
    {
        result="0";
    }
    return result;
}
int base10(int from,string line)
{
    int length=line.length();
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
        if(temp>=from)
        {
            return -1;
        }
        total+=ceil(temp*pow(from,j));
    }
    return total;
}
int main()
{
    int test;
    string base16_a,base16_b,sign,base2_a,base2_b;
    int  base10_a,base10_b;
    cin>>test;
    while(test--)
    {
        cin>>base16_a>>sign>>base16_b;
        base2_a=baseconvert(16,2,base16_a);
        base2_b=baseconvert(16,2,base16_b);
        base2_a.insert(0,(13-base2_a.size()),'0');
        base2_b.insert(0,(13-base2_b.size()),'0');
        base10_a=base10(16,base16_a);
        base10_b=base10(16,base16_b);
        if(sign=="+")
        {
            cout<<base2_a<<" + "<<base2_b<<" = "<<base10_a+base10_b<<endl;
        }
        else if(sign=="-")
        {
            cout<<base2_a<<" - "<<base2_b<<" = "<<base10_a-base10_b<<endl;
        }
    }
    return 0;
}
