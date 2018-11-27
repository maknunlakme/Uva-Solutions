#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int temp,add,i,j,n[110], result[110];
    j = 0;
    while(1)
    {
        cin>>n[j];
        add = 0;
        if(n[j]==0)
        {
            break;
        }
        temp = n[j]/2;
        while(temp!=0)
        {
            if(n[j]%temp==0)
            {
                add += temp;
            }
            temp--;
        }
        result[j] = n[j]-add;
        j++;
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(i=0;i<j;i++)
    {
        if(result[i]==0)
        {
            cout<<setw(5)<<n[i]<<"  PERFECT"<<endl;
        }
        else if(result[i]>0)
        {
            cout<<setw(5)<<n[i]<<"  DEFICIENT"<<endl;
        }
        else if(result[i]<0)
        {
            cout<<setw(5)<<n[i]<<"  ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
