#include<iostream>
#include<algorithm>
#define INF 999999999
using namespace std;
int main()
{
    int grid,i,j,total[200],result,temp,k,l;
    int arr[200][200];
    while(cin>>grid)
    {
        result=INF*(-1);
        for(i=0; i<grid; i++)
        {
            temp=0;
            for(j=0; j<grid; j++)
            {
                cin>>arr[i][j];
                if(i>0)
                {
                    arr[i][j]+=arr[i-1][j];
                }
                if(j>0)
                {
                    arr[i][j]+=arr[i][j-1];
                }
                if(i>0&&j>0)
                {
                    arr[i][j]-=arr[i-1][j-1];
                }
            }
        }
        for(i=0; i<grid; i++)
        {
            for(j=0; j<grid; j++)
            {
                for(k=i; k<grid; k++)
                {
                    for(l=j; l<grid; l++)
                    {
                        temp=arr[k][l];
                        if(i>0)
                        {
                            temp-=arr[i-1][l];
                        }
                        if(j>0)
                        {
                            temp-=arr[k][j-1];
                        }
                        if(i>0&&j>0)
                        {
                            temp+=arr[i-1][j-1];
                        }
                        result=max(result,temp);
                        //cout<<"res :"<<result<<" "<<temp<<" "<<k<<" "<<l<<endl;
                    }
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
