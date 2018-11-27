#include<iostream>
using namespace std;

unsigned long long int fact[30];

void factorial()
{
    int i;
    fact[0]=1;
    for(i=1;i<=20;i++)
    {
        fact[i]=fact[i-1]*i;
    }
}
int main()
{
    factorial();
    int test,i,j,length;
    long long int total;
    string word;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>word;
        int arr[30]={0};
        length=word.length();
        for(j=0;j<length;j++)
        {
            arr[word[j]-('A'-1)]++;
        }
        total=fact[length];
        for(j=0;j<30;j++)
        {
            if(arr[j]>1)
            {
                total/=fact[arr[j]];
            }
        }
        cout<<"Data set "<<i+1<<": "<<total<<endl;
    }
    return 0;
}
