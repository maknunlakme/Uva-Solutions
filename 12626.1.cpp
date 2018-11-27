#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int test,i,j,length,mini;
    char pizza[610];
    cin>>test;
    while(test!=0)
    {
        int countp[6] = {0};
        cin>>pizza;
        length = strlen(pizza);
        for(i=0;i<length;i++)
        {
            if(pizza[i]=='M')
            {
                countp[0]++;
            }
            else if(pizza[i]=='A')
            {
                countp[1]++;
            }
            else if(pizza[i]=='R')
            {
                countp[2]++;
            }
            else if(pizza[i]=='G')
            {
                countp[3]++;
            }
            else if(pizza[i]=='I')
            {
                countp[4]++;
            }
            else if(pizza[i]=='T')
            {
                countp[5]++;
            }
        }
        countp[1] /= 3;
        countp[2] /= 2;
        mini = *min_element(countp,countp+6);
        cout<<mini<<endl;
        test--;
    }
    return 0;
}
