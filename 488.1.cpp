#include<iostream>
using namespace std;
int main()
{
    int test,amplitude,frequency,i,j,k,temp;
    cin>>test;
    while(test!=0)
    {
        cin>>amplitude;
        cin>>frequency;
        temp = 0;
        for(i=0;i<frequency;i++)
        {
            while(temp<amplitude)
            {
                temp++;
                for(k=0;k<temp;k++)
                {
                    cout<<temp;
                }
                cout<<endl;
            }
            while(temp!=0)
            {
                temp--;
                for(k=0;k<temp;k++)
                {
                    cout<<temp;
                }
                if(test==1&&temp==0&&i==(frequency-1))
                {
                    break;
                }
                cout<<endl;
            }
        }
        test--;
    }
    return 0;
}
