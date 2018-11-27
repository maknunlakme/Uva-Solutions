#include<iostream>
using namespace std;
int main()
{
    int number;
    int count_case=0;
    while(1)
    {
        int total=0;
        cin>>number;
        if(number==0)
        {
            break;
        }
        count_case++;
        for(int i=0;i<number;i++)
        {
            int temp;
            cin>>temp;
            if(temp==0)
            {
                total--;
            }
            else
            {
                total++;
            }
        }
        cout<<"Case "<<count_case<<": "<<total<<endl;
    }
    return 0;
}
