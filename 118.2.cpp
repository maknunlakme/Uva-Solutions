#include<iostream>
#include<string>
using namespace std;

int row,column,posi,posj,length,i,j;
char direction,mat[60][60];
string line;
bool lost;

void l()
{
    switch(direction)
    {
    case 'N':
        direction='W';
        break;
    case 'W':
        direction='S';
        break;
    case 'S':
        direction='E';
        break;
    case 'E':
        direction='N';
        break;
    }
}

void r()
{
    switch(direction)
    {
    case 'N':
        direction='E';
        break;
    case 'E':
        direction='S';
        break;
    case 'S':
        direction='W';
        break;
    case 'W':
        direction='N';
    }
}

void f()
{
    switch(direction)
    {
    case 'W':
        if(posi>0)
        {
            posi--;
        }
        else if(mat[posi][posj]!='*')
        {
            lost=true;
            mat[posi][posj]='*';
        }
        break;
    case 'N':
        if(posj<column-1)
        {
            posj++;
        }
        else if(mat[posi][posj]!='*')
        {
            lost=true;
            mat[posi][posj]='*';
        }
        break;
    case 'E':
        if(posi<row-1)
        {
            posi++;
        }
        else if(mat[posi][posj]!='*')
        {
            lost=true;
            mat[posi][posj]='*';
        }
        break;
    case 'S':
        if(posj>0)
        {
            posj--;
        }
        else if(mat[posi][posj]!='*')
        {
            lost=true;
            mat[posi][posj]='*';
        }
        break;
    }
    /*cout<<"present "<<posi<<" "<<posj<<" "<<direction<<endl;
    if(leftn==true)
    {
        cout<<"left"<<endl;
    }
    if(rightn==true)
    {
        cout<<"right"<<endl;
    }
    if(up==true)
    {
        cout<<"up"<<endl;
    }
    if(down==true)
    {
        cout<<"down"<<endl;
    }*/
}
int main()
{
    cin>>row>>column;
    row++;
    column++;
    while(cin>>posi>>posj>>direction)
    {
        lost=false;
        cin>>line;
        length=line.length();
        for(i=0; i<length; i++)
        {
            if(lost==false)
            {
                switch(line[i])
                {
                case 'L':
                    l();
                    break;
                case 'R':
                    r();
                    break;
                case 'F':
                    f();
                    break;
                }
            }
            else
            {
                break;
            }
        }
        cout<<posi<<" "<<posj<<" "<<direction;
        if(lost==true)
        {
            cout<<" "<<"LOST"<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
