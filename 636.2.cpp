#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

long long int baseconvert(int from, int to, string line)
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
            return -1;
        }
        total+=ceil(temp*pow(from,j));

    }
    return total;
}
int main()
{
    long long int result,base,i,temp;
    string number;
    double sqrt_result;
    while(1)
    {
        cin>>number;
        if(number=="0")
        {
            break;
        }
        base=0;
        for(i=2; i<102; i++)
        {
            //cout<<"base "<<i<<endl;
            result=baseconvert(i,10,number);
            //cout<<"res "<<result<<endl;
            if(result>-1)
            {
                sqrt_result=sqrt(result);
                //getchar();
                temp=(result/sqrt_result);
                //cout<<"root "<<sqrt_result<<" "<<temp<<endl;
                if(sqrt_result==temp)
                {
                    base=i;
                    break;
                }
            }
        }
        if(base!=0)
        {
            cout<<base<<endl;
        }
        else
        {
            cout<<101<<endl;
        }
    }
    return 0;
}
