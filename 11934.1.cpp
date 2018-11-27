#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,l,counter,n,i;
    while(1)
    {
        cin>>a>>b>>c>>d>>l;
        if(a==0&&b==0&&c==0&&d==0&&l==0)
        {
            break;
        }
        counter=0;
        for(i=0;i<=l;i++)
        {
            n=(i*i*a)+(i*b)+c;
            //cout<<n<<" "<<i<<endl;
            if(n%d==0)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
