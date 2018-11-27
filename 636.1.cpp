#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

long long int base10(int from,long long int number)
{
    long long int i,j,total=0,rem=0,digit;
    for(i=0; number>0; i++)
    {
        rem=number%10;
        //cout<<"digit "<<digit<<endl;
        if(rem>=from)
        {
            return -1;
        }
        // cout<<"rem "<<rem<<endl;
        total+=rem*pow(from,i);
        //cout<<"total "<<total<<endl;
        number/=10;
    }
    return total;
}
int main()
{
    long long int number,result,base,i,temp;
    double sqrt_result;
    while(1)
    {
        cin>>number;
        if(number==0)
        {
            break;
        }
        base=0;
        for(i=2; i<102; i++)
        {
            //cout<<"base "<<i<<endl;
            result=base10(i,number);
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
