#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string mat[70];
        char temp;
        int row,column,i,j,posi,posj,face;
        cin>>row>>column;
        //cout<<"working"<<endl;
        cin.ignore(100,'\n');
        for(i=0;i<row;i++)
        {
            getline(cin,mat[i]);
        }
        //cout<<"working"<<endl;
        cin>>posi>>posj;
        face=0;
        posi--;
        posj--;
        cin.ignore(100,'\n');
        while(cin>>temp)
        {
            //cout<<"temp "<<temp<<" "<<posi<<" "<<posj<<" "<<(face/90)%4<<" "<<face<<endl;
            if(temp=='R')
            {
                face+=90;
                //cout<<"adding"<<endl;
            }
            else if(temp=='L')
            {
                face-=90;
                //cout<<"subtracting"<<endl;
            }
            else if(temp=='F')
            {
                if((((face/90)%4)==0)&&mat[posi-1][posj]==' ')
                {
                    posi--;
                   // cout<<"face 0"<<endl;
                }
                else if((((face/90)%4)==1)&&mat[posi][posj+1]==' ')
                {
                    posj++;
                    //cout<<"face 1"<<endl;
                }
                else if((((face/90)%4)==2)&&mat[posi+1][posj]==' ')
                {
                    posi++;
                   // cout<<"face 2"<<endl;
                }
                else if((((face/90)%4)==3)&&mat[posi][posj-1]==' ')
                {
                    posj--;
                   // cout<<"face 3"<<endl;
                }
                //cout<<"Pos "<<posi+1<<" "<<posj+1<<endl;
            }
            else if(temp=='Q')
            {
                if(face<0)
                {
                    face=face-(2*face);
                }
                cout<<posi+1<<" "<<posj+1;
                if(((face/90)%4)==0)
                {
                    cout<<" "<<'N'<<endl;
                }
                else if(((face/90)%4)==1)
                {
                    cout<<" "<<'E'<<endl;
                }
                else if(((face/90)%4)==2)
                {
                    cout<<" "<<'S'<<endl;
                }
                else if(((face/90)%4)==3)
                {
                    cout<<" "<<'W'<<endl;
                }
                break;
            }
        }
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
