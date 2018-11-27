#include<iostream>
#include<queue>
#include<string>
#include<sstream>
#include<cstdio>
#define X 150
using namespace std;

int fx[]= {+0,+0,+1,-1,+1,-1,+1,-1};
int fy[]= {+1,-1,+0,+0,+1,-1,-1,+1};

int bfs(int length,string newmat[],int a,int b)
{
    queue<pair<int,int> >Q;
    pair<int,int> u;
    string mat[X];
    int x,y,counter=0,i;
    for(i=0; i<length; i++)
    {
        mat[i]=newmat[i];
    }
    Q.push(make_pair(a,b));
    if(mat[a][b]=='W')
    {
        mat[a][b]='L';
        counter++;
    }
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(i=0; i<8; i++)
        {
            x=u.first+fx[i];
            y=u.second+fy[i];
            if(x>=0&&x<length&&y>=0&&y<mat[x].length()&&mat[x][y]=='W')
            {
                counter++;
                mat[x][y]='L';
                Q.push(make_pair(x,y));
            }
        }
    }
    return counter;
}
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,a,b,i;
    string temp;
    cin>>test;
    cin.ignore(100,'\n');
    while(test--)
    {
        string mat[X];
        for(i=0;; i++)
        {
            cin>>mat[i];
            //cout<<"blah "<<mat[i]<<endl;
            if(mat[i][0]!='L'&&mat[i][0]!='W')
            {
                stringstream ss(mat[i]);
                ss>>a;
                cin>>b;
                //cout<<a<<" "<<b<<" "<<mat[i][0]<<" "<<mat[i]<<endl;
                break;
            }
        }
        //cout<<"hey"<<endl;
        if(mat[a-1][b-1]=='L')
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<bfs(i,mat,a-1,b-1)<<endl;
        }
        cin.ignore(100,'\n');
        while(1)
        {
            getline(cin,temp);
            if(temp.empty())
            {
                break;
            }
            stringstream ss(temp);
            ss>>a>>b;
            //cout<<"Bling "<<a<<" "<<b<<" "<<temp<<endl;
            if(mat[a-1][b-1]=='L')
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<bfs(i,mat,a-1,b-1)<<endl;
            }
        }
        if(test>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
