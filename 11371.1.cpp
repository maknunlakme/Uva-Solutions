#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool myfunction (int i,int j) { return (i>j); }

char number[30];
int makestring(int n)
{
    int i;
    for(i=0;n>0;i++)
    {
        number[i]=(n%10)+'0';
        n/=10;
    }
    return i;
}

long long int makenumber(char s[],int length)
{
    int i,temp=1;
    long long int num=0;
    for(i=0;i<length;i++)
    {
        num*=temp;
        temp=10;
        num+=(s[i]-'0');
    }
    //cout<<"MUM "<<num<<endl;
    return num;
}

void checkzero(char s[],int length)
{
    long long int i;
    if(s[0]!='0')
    {
        return;
    }
    for(i=0;i<length;i++)
    {
        if(s[i]!='0')
        {
            swap(s[i],s[0]);
            return;
        }
    }
}
int main()
{
    long long int a,b,i,minuse,length;
    char x[30],y[30];
    while(cin>>a)
    {
        length=makestring(a);
        strcpy(x,number);
        strcpy(y,number);
        sort(x,x+length);
        sort(y,y+length,myfunction);
        checkzero(x,length);
        //checkzero(y,length);
        //cout<<"Tin tin: "<<number<<" "<<x<<" "<<y<<endl;
        a=makenumber(x,length);
        b=makenumber(y,length);
        //cout<<" a "<<a<<" "<<b<<endl;
        minuse=b-a;
        cout<<b<<" - "<<a<<" = "<<minuse<<" = 9 * "<<minuse/9<<endl;
    }
    return 0;
}
