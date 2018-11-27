#include<iostream>
#include<vector>
using namespace std;

bool check(long long number)
{
    //cerr<<"AA "<<number<<" "<<blah<<endl;
    int mark[20]={0};
    int temp;
    while(number>0)
    {
        temp=number%10;
        //cerr<<"DD "<<temp<<" "<<number<<endl;
        if(mark[temp]==0)
        {
            //cerr<<"JJ "<<endl;
            mark[temp]=1;
            number/=10;
        }
        else return false;
    }
    return true;
}


int main()
{
    #ifdef maknun
     freopen("tempin.txt","r",stdin);
    #endif // maknun
    long long n,i,j,blah,c=0,test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        c++;
        if(n==0) break;
        if(c!=1) cout<<endl;
        for(i=1;n*i<=9876543210LL;i++)
        {
            blah=n*i;
            if(blah!=i and check(i)==1 and check(blah)==1)
            {
                cout<<blah<<" / "<<i<<" = "<<n<<endl;
            }
        }
    }
    return 0;
}
