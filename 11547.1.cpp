#include<iostream>
using namespace std;
int main()
{
    int test,number,result;
    cin>>test;
    while(test!=0)
    {
        cin>>number;
        result = ((((((number*567)/9)+7492)*235)/47)-498);
        result/=10;
        result%=10;
        if(result<0)
        {
            result -=(result*2);
        }
        cout<<result<<endl;
        test--;
    }
    return 0;
}
