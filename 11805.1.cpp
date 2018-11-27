#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int counter, n,k,p,test,case_count;
    cin>>test;
    case_count = 0;
    while(test!=0)
    {
        cin>>n;
        cin>>k;
        cin>>p;
        counter = 0;
        while(counter!=p)
        {
            if(k==n)
            {
                k = 0;
            }
            k++;
            counter++;
        }
        case_count++;
        cout<<"Case "<<case_count<<": "<<k<<endl;
        test--;
    }
    return 0;
}
