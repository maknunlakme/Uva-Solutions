#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<sstream>
#include<string>
#define X 250
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}


int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,x,y,node,i,j,k;
    double walk=(10.0 / 60.0 * 1000.0);
    double train=(40.0 / 60.0 * 1000.0);
    string line;
    cin>>test;
    while(test--)
    {
        double mat[X][X]={0};
        double arr[X],brr[X];
        node=0;
        cin>>x>>y;
        arr[node]=x;
        brr[node]=y;
        node++;
        cin>>x>>y;
        arr[node]=x;
        brr[node]=y;
        node++;
        //mat[0][1]=mat[1][0]=distance(arr[node-1],brr[node],arr[node-1],arr[node]);
        cin.ignore(100,'\n');
        while(getline(cin,line))
        {
            if(line.empty()) break;
            stringstream ss(line);
            ss>>x>>y;
            arr[node]=x;
            brr[node]=y;
            node++;
            while(1)
            {
                ss>>x>>y;
                if(x==-1 and y==-1) break;
                arr[node]=x;
                brr[node]=y;
                mat[node-1][node]=mat[node][node-1]=(distance(arr[node-1],brr[node-1],arr[node],brr[node])/train);
                //cerr<<arr[node-1]<<" "<<brr[node-1]<<" "<<arr[node]<<" "<<brr[node]<<endl;
                node++;
            }
            //cin.ignore(100,'\n');
        }
        for(i=0;i<node;i++)
        {
            for(j=0;j<node;j++)
            {
                if(mat[i][j]==0) mat[i][j]=(distance(arr[i],brr[i],arr[j],brr[j])/walk);
            }
        }

        for(k=0;k<node;k++)
        {
            for(i=0;i<node;i++)
            {
                for(j=0;j<node;j++)
                {
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
        cout<<static_cast<int>(round((mat[0][1])))<<endl;
        if(test>0) cout<<endl;
    }
    return 0;
}
