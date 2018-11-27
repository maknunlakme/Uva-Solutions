#include<iostream>
using namespace std;
int main()
{
    int arr[1100]={0};
    arr[0]=1;
    arr[1]=0;
    for(int i=2;(i*i)<1100;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;(j*i)<1100;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int cuts[1100]={0};
    int temp=0;
    for(int i=1;i<1100;i++)
    {
        if(arr[i]==0)
        {
            cuts[temp]=i;
            temp++;
        }
    }
    int a,b;
    while(cin>>a>>b)
    {
        temp=0;
        for(int i=0;cuts[i]<=a;i++)
        {
            temp++;
        }
        cout<<a<<" "<<b<<":";
        int counter=0;
        if(temp%2!=0)
        {
            int i;
            if(((temp/2)-b+1)<0)
            {
                i=0;
            }
            else
            {
                i=((temp/2)-b+1);
            }
            for(;counter<((b*2)-1)&&(cuts[i]<=a);i++)
            {
                counter++;
                cout<<" "<<cuts[i];
            }
        }
        else
        {
            int i;
            if(((temp/2)-b)<0)
            {
                i=0;
            }
            else
            {
                i=((temp/2)-b);
            }
            for(;(counter<(b*2))&&(cuts[i]<=a);i++)
            {
                counter++;
                cout<<" "<<cuts[i];

            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
