#include<iostream>
#include<string>
#include<cstdio>
using namespace std;


int d1[]= {2,3,4,5};
int d2[]= {0,2,1,4};
int d3[]= {0,5,1,3};

bool match(string a,string b)
{
    int i,j,k,l;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<4; k++)
            {
                //cerr<<"QQ "<<a<<" "<<b<<endl;
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
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test;
    string a,b;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        //cout<<"RR "<<a<<" "<<b<<endl;
        if(match(a,b)==true) cout<<"Equal"<<endl;
        else cout<<"Not Equal"<<endl;
    }
    return 0;
}
