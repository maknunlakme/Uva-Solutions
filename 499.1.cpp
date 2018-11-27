#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char line[10000];
    char temp;
    int length,i,c,s;
    int maxic,maxis,maxi;
    while(gets(line))
    {
        int capital_alpha[26] = {0};
        int small_alpha[26] = {0};
        length = strlen(line);
        for(i=0;i<length;i++)
        {
            for(c=0;c<26;c++)
            {
                if(line[i]==65+c)
                {
                    capital_alpha[c]++;
                }
            }
            for(s=0;s<26;s++)
            {
                if(line[i]==97+s)
                {
                    small_alpha[s]++;
                }
            }
        }
        maxic = *max_element(capital_alpha,capital_alpha+26);
        maxis = *max_element(small_alpha,small_alpha+26);
        maxi = max(maxic,maxis);
        for(i=0;i<26;i++)
        {
            if(maxi==capital_alpha[i])
            {
                temp = 65+i;
                cout<<temp;
            }
        }
        for(i=0;i<26;i++)
        {
            if(maxi==small_alpha[i])
            {
                temp = 97+i;
                cout<<temp;
            }
        }
        cout<<" "<<maxi<<endl;
    }
    return 0;
}
