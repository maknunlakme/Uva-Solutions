#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int r1[10],r2[20],r3[20],col[10];
int counter,blah;

void rec(int y)
{
    if(y==8)
    {
        counter++;
        cout<<setw(2)<<counter;
        cout<<"     ";
        for(int i=0; i<8; i++)
        {
            cout<<" "<<col[i]+1;
        }
        cout<<endl;
        return;
    }
    if(y==blah)
    {
        rec(y+1);
    }
    else
    {
        for(int x=0; x<8; x++)
        {
            if(r1[x] or r2[x+y] or r3[x-y+7])
                continue;
            r1[x]=r2[x+y]=r3[x-y+7]=1;
            col[y]=x;
            //cerr<<"AAA "<<y<<endl;
            rec(y+1);
            r1[x]=r2[x+y]=r3[x-y+7]=0;
            col[y]=0;
        }
    }
}


int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    int test,x,y;
    cin>>test;
    while(test--)
    {
        counter=0;
        cin>>x>>y;
        x--;
        y--;
        blah=y;
        r1[x]=r2[x+y]=r3[x-y+7]=1;
        col[y]=x;
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;
        rec(0);
        r1[x]=r2[x+y]=r3[x-y+7]=0;
        col[y]=0;
        if(test!=0)
            cout<<endl;
    }
    return 0;
}
