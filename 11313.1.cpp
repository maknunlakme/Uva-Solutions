#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m,show=0;
        scanf("%d%d",&n,&m);
        while(n>=m)
        {
            show+=n/m;
            //cout<<"show :"<<show<<endl;
            n=(n/m)+(n%m);
            //cout<<"n "<<n<<endl;
        }
        if(n==1)
        {
            printf("%d\n",show);
        }
        else
        {
            printf("cannot do this\n");
        }
    }
    return 0;
}
