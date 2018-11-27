#include<iostream>
using namespace std;

int main()
{
    unsigned int employee[3];
    int test_case, maximum, minimum;
    maximum = 0;
    minimum = 100000;
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
        for(i=0;i<3;i++)
        {
            if(maximum<employee[i])
            {
                maximum = employee[i];
            }
            else if(minimum>employee[i])
            {
                minimum = employee[i];
            }
        }
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
