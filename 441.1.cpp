#include<iostream>
using namespace std;
int main()
{
    int a,arr[20],i,j,k,l,m,n;
    bool print_line=false;
    while(1)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }
        if(print_line==true)
        {
            cout<<endl;
        }
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<a-5;i++)
        {
            for(j=i+1;j<a-4;j++)
            {
                for(k=j+1;k<a-3;k++)
                {
                    for(l=k+1;l<a-2;l++)
                    {
                        for(m=l+1;m<a-1;m++)
                        {
                            for(n=m+1;n<a;n++)
                            {
                                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<arr[m]<<" "<<arr[n]<<endl;
                            }
                        }
                    }
                }
            }
        }
        print_line=true;
    }
    return 0;
}
