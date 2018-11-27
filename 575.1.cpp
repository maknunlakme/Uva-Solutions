#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string n;
    int i,length,total,temp;
    while(1)
    {
        cin>>n;
        total = 0;
        if(n =="0")
        {
            break;
        }
        length = n.length();
        temp = length;
        for(i=0;i<length;i++)
        {
            total += ((n[i]-48)*(pow(2,temp) - 1));
            //cout<<"n "<<n[i]-48<<endl;
            //cout<<"pow "<<pow(2,temp)<<endl;
            //cout<<"total "<<total<<endl;
            temp--;
        }
        cout<<total<<endl;
    }
}
