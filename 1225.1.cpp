#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int digit[10]={0};
        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            int j=i;
            while(j!=0)
            {
                int temp=j%10;
                digit[temp]++;
                j/=10;
            }
        }
        for(int i=0;i<9;i++)
        {
            cout<<digit[i]<<" ";
        }
        cout<<digit[9]<<endl;
    }
    return 0;
}
