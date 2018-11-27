#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char arr[10]={"153125432"},brr[10];
    while(next_permutation(arr,arr+10)!=arr[10])
    {
        strcpy(brr,arr);
        brr[10]=next_permutation(brr,brr+10);
        cout<<brr<<endl;
    }
    return 0;
}
