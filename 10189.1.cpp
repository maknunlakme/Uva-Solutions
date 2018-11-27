#include<iostream>
using namespace std;
int main()
{
    long long n,m,i,j,counter;
    char mine[110][110];
    char field[110][110];
    counter = 0;
    while(1)
    {
        for(i=0;i<110;i++)
        {
            for(j=0;j<110;j++)
            {
                field[i][j]='0';
            }
        }
        cin>>n;
        cin>>m;
        if(n==0||m==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>mine[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
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
        counter++;
        if(counter>1)
        {
            cout<<endl;
        }
        cout<<"Field #"<<counter<<":"<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<field[i][j];
            }
            cout<<endl;
        }
    }
}