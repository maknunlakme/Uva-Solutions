#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int row,column,enter,i,j,counter;
    char mat[15][15];
    bool print;
    while(1)
    {
        cin>>row>>column>>enter;
        cin.get();
        print=true;
        if(row==0&&column==0&&enter==0)
        {
            break;
        }
        counter=0;
        int mark[15][15];
        memset(mark,0,sizeof mark);
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cin>>mat[i][j];
            }
        }
        i=0;
        j=enter-1;
        while((i>-1)&&(j>-1)&&i<row&&j<column)
        {
            if(mark[i][j]==0)
            {
                counter++;
                mark[i][j]=counter;
                //cout<<"counting "<<counter<<" "<<i<<" "<<j<<" "<<mark[i][j]<<endl;
                if(mat[i][j]=='E')
                {
                    j++;
                }
                else if(mat[i][j]=='S')
                {
                    i++;
                }
                else if(mat[i][j]=='W')
                {
                    j--;
                }
                else if(mat[i][j]=='N')
                {
                    i--;
                }
            }
            else
            {
                cout<<mark[i][j]-1<<" step(s) before a loop of "<<counter-(mark[i][j]-1)<<" step(s)"<<endl;
                print=false;
                break;
            }
        }
        if(print==true)
        {
            cout<<counter<<" step(s) to exit"<<endl;
        }
    }
    return 0;
}
