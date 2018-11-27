#include<iostream>
using namespace std;
int main()
{
    int i, test, team, count_case;
    int age[15];
    cin>>test;
    count_case = 0;
    while(test!=0)
    {
        cin>>team;
        for(i=0;i<team;i++)
        {
            cin>>age[i];
        }
        count_case++;
        cout<<"Case "<<count_case<<": "<<age[team/2]<<endl;
        test--;
    }
    return 0;
}
