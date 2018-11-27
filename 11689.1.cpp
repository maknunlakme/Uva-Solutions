#include<iostream>
using namespace std;
int main()
{
    int e,f,c,n,total,temp,test;
    cin>>test;
    while(test!=0)
    {
        cin>>e;
        cin>>f;
        cin>>c;
        n = e+f;
        total = 0;
        while(n>=c)
        {
            total += n/c;
            temp = n%c;
            n /=c;
            n += temp;
        }
        cout<<total<<endl;
        test--;
    }
    return 0;
}
