#include<iostream>
using namespace std;
int main()
{
    int n,m,temp,player,match,i,j;
    while(cin>>n>>m)
    {
        player=0;
        for(i=0;i<n;i++)
        {
            match=0;
            for(j=0;j<m;j++)
            {
                cin>>temp;
                if(temp>0)
                {
                    match++;
                }
            }
            if(match==m)
            {
                player++;
            }
        }
        cout<<player<<endl;
    }
    return 0;
}
