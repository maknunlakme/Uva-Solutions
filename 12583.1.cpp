#include<iostream>
#include<string>
using namespace std;

int main()
{
    #ifdef maknun
     freopen("tempin.txt","r",stdin);
    #endif // maknun
    int test,counter,i,j,k,l,n,t;
    string line;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        cin>>n>>k>>line;
        counter=0;
        for(i=0;i<n;i++)
        {
            for(j=i-1,l=0;j>=0 and l<k;j--,l++)
            {
                if(line[i]==line[j])
                {
                    counter++;
                    break;
                }
            }
        }
        cout<<"Case "<<t<<": "<<counter<<endl;
    }
    return 0;
}
