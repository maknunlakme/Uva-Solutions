#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int counter[16];
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
string reversed(string line)
{
    int i,j,length;
    string newline;
    length=line.length();
    for(i=length-1,j=0;i>-1;i--,j++)
    {
        newline[j]=line[i];
    }
    return newline;
}
bool palindrome(string line)
{
    int i,j,length;
    string newline=reversed(line);
    length=line.length();
    for(i=0;i<length;i++)
    {
        if(line[i]!=newline[i])
        {
            return false;
        }
    }
    return true;
}
string add(string a, string b)
{
    int length_a,length_b,handle,temp,i,j;
    string result;
    length_a=a.length();
    length_b=b.length();
    handle=0;
    if(length_a<length_b)
    {
        for(i=length_a,j=length_b;i>-1;i--,j--)
        {
            temp=a[i]+b[i]+handle;
            handle=temp%10;
            result.insert(0,1,(temp+'0'));
        }
        if(handle>0)
        {
            result.insert(0,1,b[j]+1);
            j--;
        }
        while(j>-1)
        {
            result.insert(0,1,b[j]);
            j--;
        }
    }
    else
    {
        for(i=length_a,j=length_b;j>-1;i--,j--)
        {
            temp=a[i]+b[i]+handle;
            handle=temp%10;
            result.insert(0,1,(temp+'0'));
        }
        if(handle>0)
        {
            result.insert(0,1,a[i]+1);
            i--;
        }
        while(i>-1)
        {
            result.insert(0,1,a[i]);
            i--;
        }
    }
    return result;
}
int main()
{
    string number,reversed_number,total,converted;
    int i;
    while(cin>>number)
    {
        for(i=15;i>1;i--)
        {
            reversed_number=reversed(number);
            total=add(number,reversed_number);
            counter[i]++;
            converted = baseconvert(10,i,total);
            if(converted=="blank")
            {
                break;
            }
            while(!palindrome(converted))
            {
                reversed_number=reversed(number);
                total=add(number,reversed_number);
                counter[i]++;
                converted=baseconvert(10,i,total);
            }
        }
        if(counter[15]==0)
        {
            cout<<"?"<<endl;
        }
        else
        {
            cout<<counter[15]<<endl;
        }
        for(i=14;i>1;i--)
        {
            if(counter[i]==0)
            {
                cout<<"?"<<endl;
            }
            else
            {
                cout<<counter[i]<<endl;
            }
        }
    }
    return 0;
}
