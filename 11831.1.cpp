#include<iostream>
using namespace std;

int i,j,row,column,instruction,posi,posj,sticker,length;
char direction,mat[110][110];
string line;

void d()
{
    switch(direction)
    {
    case 'N':
        direction='L';
        break;
    case 'L':
        direction='S';
        break;
    case 'S':
        direction='O';
        break;
    case 'O':
        direction='N';
        break;
    }
}

void e()
{
    switch(direction)
    {
    case 'N':
        direction='O';
        break;
    case 'O':
        direction='S';
        break;
    case 'S':
        direction='L';
        break;
    case 'L':
        direction='N';
        break;
    }
}

void f()
{
    switch(direction)
    {
    case 'N':
        if(mat[posi-1][posj]!='#'&&posi>0)
        {
            posi--;
        }
        break;
    case 'L':
        if(mat[posi][posj+1]!='#'&&posj<column-1)
        {
            posj++;
        }
        break;
    case 'S':
        if(mat[posi+1][posj]!='#'&&posi<row-1)
        {
            posi++;
        }
        break;
    case 'O':
        if(mat[posi][posj-1]!='#'&&posj>0)
        {
            posj--;
        }
        break;
    }
    if(mat[posi][posj]=='*')
    {
        sticker++;
        mat[posi][posj]='.';
    }
}
int main()
{
    while(1)
    {
        cin>>row>>column>>instruction;
        sticker=0;
        if(row==0&&column==0&&instruction==0)
        {
            break;
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]!='*'&&mat[i][j]!='.'&&mat[i][j]!='#')
                {
                    posi=i;
                    posj=j;
                    direction=mat[i][j];
                }
            }
        }
        cin>>line;
        for(i=0; i<instruction; i++)
        {
            switch(line[i])
            {
            case 'D':
                d();
                break;
            case 'E':
                e();
                break;
            case 'F':
                f();
                break;
            }
        }
        cout<<sticker<<endl;
    }
    return 0;
}
