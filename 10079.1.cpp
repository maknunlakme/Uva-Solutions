#include<iostream>
using namespace std;
int main()
{
    long int cut;
    long int pieces;
    while(cin>>cut)
    {
        if(cut<0)
        {
            break;
        }
        pieces = (cut*(cut+1))/2+1;
        cout<<pieces<<endl;
    }
    return 0;
}
