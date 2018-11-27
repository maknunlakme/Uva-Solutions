#include<iostream>
#include<string>
#include<vector>
using namespace std;

string line;

int d1[]= {2,1,3,4};
int d2[]= {0,1,5,4};
int d3[]= {2,0,3,5};

bool match(string a,string b)
{
    int i,j,k,l;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<4; k++)
            {
                if(a==b)
                    return 1;
                for(l=0; l<3; l++)
                {
                    swap(a[d1[l]],a[d1[l+1]]);
                }
            }
            for(l=0; l<3; l++)
            {
                swap(a[d2[l]],a[d2[l+1]]);
            }
        }
        for(l=0; l<3; l++)
        {
            swap(a[d3[l]],a[d3[l+1]]);
        }
    }
    return 0;
}

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    string a,b;
    while(cin>>line)
    {
        a=line.substr(0,6);
        b=line.substr(6,6);
        if(match(a,b)==true) cout<<"TRUE"<<endl;
        else cout<<"FALSE"<<endl;
    }
    return 0;
}
