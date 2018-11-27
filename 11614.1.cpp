#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        long long int x,n;
        long double root;
        cin>>x;
        root=((8*x)+1);
        root = sqrt(root);
        long long int temp1;
        temp1 = (root-1)/2;
        cout<<temp1<<endl;
    }
    return 0;
}
