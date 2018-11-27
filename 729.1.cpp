#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int test,linesize,one,i,k;
    vector<int>line;
    cin>>test;
    while(test--)
    {
        cin>>linesize>>one;
        for(i=0;i<linesize;i++)
        {
            line.push_back(0);
        }
        for(i=linesize-1,k=0;k<one;k++,i--)
        {
            line[i]=1;
        }
        do
        {
            for(i=0;i<linesize;i++)
            {
                cout<<line[i];
            }
            cout<<endl;

        }while(next_permutation(line.begin(),line.end()));
        line.clear();
        if(test!=0)
        {
            cout<<endl;
        }
    }
    return 0;
}
