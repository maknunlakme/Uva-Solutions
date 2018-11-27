#include<iostream>
#include<string>
#define X 120
using namespace std;

int check(int a,int b,int row,int column,string mat[])
{
    int fx[]= {+0,+0,+1,-1,+1,-1,+1,-1};
    int fy[]= {+1,-1,+0,+0,+1,-1,-1,+1};
    int x,y,i;
    for(i=0; i<8; i++)
    {
        x=a+fx[i];
        y=b+fy[i];
        if(x>=0&&x<row&&y>=0&&y<column&&mat[x][y]=='*')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int row,column,i,j,counter;
    while(1)
    {
        cin>>row>>column;
        if(row==0&&column==0)
        {
            break;
        }
        string mat[X];
        counter=0;
        for(i=0; i<row; i++)
        {
            cin>>mat[i];
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if((mat[i][j]=='*')&&(check(i,j,row,column,mat)==0))
                {
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
