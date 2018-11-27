#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};
    int n,i,a,b;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        a=n;
        b=1;
        while(a>0)
        {
            a/=10;
            b*=10;
        }
        for(i=0;i<22;i++)
        {
            if(b<arr[i])
            {
                break;
            }
            if(n<arr[i])
            {
                cout<<arr[i]<<endl;
                i=0;
                break;
            }
        }
        if(i!=0)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
