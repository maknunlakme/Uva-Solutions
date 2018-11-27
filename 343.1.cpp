#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long long int baseconvert(int base,string  line)
{
    int length=line.length();
    long long int i,j,total=0,temp,temp1;
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
        if(temp>=base)
        {
            return -1;
        }
        temp1=ceil(temp*pow(base,j));
        total+=temp1;
    }
    return total;
}
int main()
{
    long long int i,j,base_a,base_b,temp;
    string a,b;
    bool double_break;
    while(cin>>a>>b)
    {
        base_a=0;
        base_b=0;
        for(i=2; i<=36; i++)
        {
            temp=baseconvert(i,a);
            if(temp>-1)
            {
                for(j=2; j<=36; j++)
                {
                    if(temp==baseconvert(j,b))
                    {
                        base_a=i;
                        base_b=j;
                        i=40;
                        j=40;
                        break;
                    }
                }
            }
        }
        if(base_a==0&&base_b==0)
        {
            cout<<a<<" is not equal to "<<b<<" in any base 2..36"<<endl;
        }
        else
        {
            cout<<a<<" (base "<<base_a<<") = "<<b<<" (base "<<base_b<<")"<<endl;
        }
    }
    return 0;
}
