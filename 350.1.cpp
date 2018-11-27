#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int Z,I,M,L,i,j,count_cycle,count_case;
    bool same;
    bool double_break;
    count_case = 0;
    while(1)
    {
        int cycle[10000] = {0};
        same = false;
        double_break = false;
        count_cycle = 0;
        cin>>Z;
        cin>>I;
        cin>>M;
        cin>>L;
        if(Z==0&&I==0&&M==0&&L==0)
        {
            break;
        }
        cycle[0] = L;
        for(i=1;same==false;i++)
        {
            L = ((Z*L)+I)%M;
            cycle[i] = L;
            if(count(cycle+1,cycle+i+1,L)>1)
            {
                    break;
            }
            else
            {
                count_cycle++;
            }
        }
        count_case++;
        cout<<"Case "<<count_case<<": "<<count_cycle<<endl;
    }
}
