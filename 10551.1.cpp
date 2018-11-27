#include<iostream>
#include<cmath>
#include<iomanip>
#include<sstream>
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
    long long int b,base10_m,rem,length,i;
    string p,m,base10_p,result;
    while(1)
    {
        cin>>b;
        if(b==0)
        {
            break;
        }
        cin>>p>>m;
        base10_m=base10(b,m);
        //cout<<"base 10 m : "<<base10_m<<endl;
        //base10_p=baseconvert(b,10,p);
        //cout<<"base 10 p : "<<base10_p<<endl;
        length=p.length();
        rem=0;
        for(i=0;i<length;i++)
        {
            rem*=b;
            //cout<<rem<<endl;
            rem+=(p[i]-'0');
            //cout<<rem<<endl;
            rem%=base10_m;
            //cout<<rem<<endl;
        }
        //cout<<rem<<endl;
        stringstream convert;
        convert<<rem;
        result=convert.str();
        //cout<<"rrr "<<result<<endl;
        cout<<baseconvert(10,b,result)<<endl;
    }
    return 0;
}
