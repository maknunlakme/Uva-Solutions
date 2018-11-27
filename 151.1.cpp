#include<iostream>
#include<cstdio>
using namespace std;

int josephus(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (josephus(n - 1, k) + k) % n;
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,n,k,answer;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        answer=0;
        n--;
        k=1;
        while(josephus(n,k)!=11)
        {
            cout<<"jk "<<josephus(n,k)<<" "<<n<<" "<<k<<endl;
            k++;
        }
        cout<<k<<endl;
    }
    return 0;
}

