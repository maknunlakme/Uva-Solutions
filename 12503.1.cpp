#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int arr[130];
        int n,instruction;
        int total=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            char temp[10];
            cin>>temp;
            if(strcmp("LEFT",temp)==0)
            {
                arr[i]=-1;
                total--;
            }
            else if(strcmp("RIGHT",temp)==0)
            {
                arr[i]=1;
                total++;
            }
            else if(strcmp("SAME",temp)==0)
            {
                cin>>temp;
                cin>>instruction;
                arr[i]=arr[instruction-1];
                total+=arr[instruction-1];
            }
        }
        cout<<total<<endl;

    }
}
