#include<iostream>
using namespace std;

int a[300],b[300],c[300],d[300];

int cube(int n)
{
    return n*n*n;
}

int main()
{
    int i,j,k,l,e=0;
    for(i=2;i<=200;i++)
    {
        for(j=2;j<=i;j++)
        {
            for(k=j+1;k<=i;k++)
            {
                for(l=k+1;l<=i;l++)
                {
                    if(cube(i)==cube(j)+cube(k)+cube(l))
                    {
                        a[e]=i,b[e]=j,c[e]=k,d[e]=l;
                        e++;
                    }
                }
            }
        }
    }
    for(i=0;i<e;i++)
    {
        cout<<"Cube = "<<a[i]<<", Triple = ("<<b[i]<<","<<c[i]<<","<<d[i]<<")"<<endl;
    }
    return 0;
}
