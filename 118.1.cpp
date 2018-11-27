#include<iostream>
#include<vector>
#include<map>
using namespace std;

int mat[60][60];
map<char,char>rightdirection;
map<char,char>leftdirection;
map<char,int>mark;
int main()

{
    rightdirection['E']='S';
    rightdirection['S']='W';
    rightdirection['W']='N';
    rightdirection['N']='E';
    leftdirection['E']='N';
    leftdirection['N']='W';
    leftdirection['W']='S';
    leftdirection['S']='E';
    int x,y,length,i,lastx,lasty;
    string line,turned;
    char temp;
    bool lost;
    cin>>lastx>>lasty;
    while(cin>>x>>y>>turned>>line)
    {
        //cout<<"line :"<<line<<endl;
        lost=false;
        temp=turned[0];
        length=line.length();
        for(i=0; i<length; i++)
        {
            if(line[i]=='R')
            {

                cout<<"prev r turn :"<<temp<<endl;
                temp=rightdirection[temp];
                cout<<"R SIDE "<<temp<<endl;
            }
            else if(line[i]=='L')
            {
                cout<<"prev l turn :"<<temp<<endl;
                temp=leftdirection[temp];
                cout<<"L SIDE "<<temp<<endl;
            }
            else
            {
                if(temp=='E')
                {
                    if(((x+1)>lastx)&&(mat[x][y]!=1))
                    {
                        cout<<"losing "<<x<<" "<<y<<endl;
                        lost=true;
                        mat[x][y]=1;
                        break;
                    }
                    if(mat[x+1][y]==0)
                    {
                        x++;
                    }
                }
                else if(temp=='S')
                {
                    if(((y-1)<0)&&(mat[x][y]!=1))
                    {
                        cout<<"losing "<<x<<" "<<y<<endl;
                        lost=true;
                        mat[x][y]=1;
                        break;
                    }
                    if(mat[x][y-1]==0)
                    {
                        y--;
                    }
                }
                else if(temp=='W')
                {
                    if(((x-1)<0)&&(mat[x][y]!=1))
                    {
                        cout<<"losing "<<x<<" "<<y<<endl;
                        lost=true;
                        mat[x][y]=1;
                        break;
                    }
                    if(mat[x-1][y]==0)
                    {
                        x--;
                    }
                }
                else if(temp=='N')
                {
                    if(((y+1)>lasty)&&(mat[x][y]!=1))
                    {
                        cout<<"losing "<<x<<" "<<y<<endl;
                        lost=true;
                        mat[x][y]=1;
                        break;
                    }
                    if(mat[x][y+1]==0)
                    {
                        y++;
                    }
                }
                cout<<x<<" "<<y<<endl;
            }
        }
        cout<<x<<" "<<y<<" "<<temp;
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
