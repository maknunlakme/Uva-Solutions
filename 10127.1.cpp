#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n,counter,i,number;
    while(cin>>n)
    {
        counter=1;
        number=1;
        while(number%n!=0)
        {
            number%=n;
            number=(number*10)+1;
            counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
