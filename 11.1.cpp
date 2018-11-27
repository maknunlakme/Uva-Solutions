#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    unsigned int employee[3];
    int test_case, maximum, minimum;
    int survived[20] = {0};
    int i,j,loop;
    loop = 0;
    j = 0;
    cin>>test_case;
    while(test_case!=0)
    {
        for(i=0;i<3;i++)
        {
            cin>>employee[i];
        }
        maximum = max(employee[0],employee[1],employee[2]);
        minimum = min(employee[0],employee[1],employee[2]);
        for(i=0;i<3;i++)
        {
            if(maximum==employee[i])
            {
                employee[i] = 0;
            }
            else if(minimum==employee[i])
            {
                employee[i] = 0;
            }
        }
        for(i=0;i<3;i++)
        {
            survived[j] += employee[i];
        }
        test_case--;
        j++;
    }
    for(i=0;i<j;i++)
    {
        cout<<survived[i]<<endl;
    }
    return 0;
}
