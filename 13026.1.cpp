#include<iostream>
#include<string>
using namespace std;
int main()
{
    string number[1050],match;
    int test,n,i,j,k,counter,length;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>number[j];
        }
        cin>>match;
        length=match.length();
        cout<<"Case "<<i+1<<":"<<endl;
        for(j=0;j<n;j++)
        {
            counter=0;
            for(k=0;k<length;k++)
            {
                if(match[k]!=number[j][k])
                {
                    counter++;
                }
            }
            if(counter<2)
            {
                cout<<number[j]<<endl;
            }
        }
    }
    return 0;
}
