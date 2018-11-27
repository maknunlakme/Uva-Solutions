#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,j;
        char mine[15][15];
        char touch[15][15];
        char field[15][15];
        char game[15][15];
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                field[i][j]='0';
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                game[i][j]='0';
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>mine[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>touch[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mine[i][j]=='*')
                {
                    field[i][j]='*';
                    if(mine[i][j+1]!='*')
                    {
                        field[i][j+1]++;
                    }
                    if(mine[i][j-1]!='*')
                    {
                        field[i][j-1]++;
                    }
                    if(mine[i+1][j]!='*')
                    {
                        field[i+1][j]++;
                    }
                    if(mine[i+1][j+1]!='*')
                    {
                        field[i+1][j+1]++;
                    }
                    if(mine[i+1][j-1]!='*')
                    {
                        field[i+1][j-1]++;
                    }
                    if(mine[i-1][j]!='*')
                    {
                        field[i-1][j]++;
                    }
                    if(mine[i-1][j+1]!='*')
                    {
                        field[i-1][j+1]++;
                    }
                    if(mine[i-1][j-1]!='*')
                    {
                        field[i-1][j-1]++;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(touch[i][j]=='x'&&mine[i][j]=='*')
                {
                    for(int k=0;k<n;k++)
                    {
                        for(int l=0;l<n;l++)
                        {
                            if(field[k][l]=='*')
                            {
                                game[k][l]=field[k][l];
                            }
                        }
                    }
                }
                else if(touch[i][j]=='x')
                {
                    game[i][j]=field[i][j];
                }
                else if(touch[i][j]=='.'&&game[i][j]!='*')
                {
                    game[i][j]=touch[i][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<game[i][j];
            }
            cout<<endl;
        }
        if(test!=0)
        {
            cout<<endl;
        }
    }
}
