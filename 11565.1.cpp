#include<iostream>
using namespace std;

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    int test,a,b,c,i,j,k;
    bool printed;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        printed=false;
        for(i=-100; i<110; i++)
        {
            for(j=-100; j<110; j++)
            {
                if(i!=j)
                    for(k=-100; k<110; k++)
                    {
                        if(j!=k)
                            if(i+j+k==a and i*j*k==b and i*i+j*j+k*k==c)
                            {
                                if(k!=i)
                                {
                                    cout<<i<<" "<<j<<" "<<k<<endl;
                                    printed=true;
                                    i=111;
                                    j=111;
                                    k=111;
                                    break;
                                }
                            }
                    }
            }
        }
        if(printed==false)
            cout<<"No solution."<<endl;
    }
    return 0;
}
