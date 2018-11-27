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
int main()
{
    string line;
    while(cin>>line)
    {
        if(line[0]=='-')
        {
            break;
        }
        else
        {
            cout<<baseconvert(10,3,line)<<endl;
        }
    }
    return 0;
}
