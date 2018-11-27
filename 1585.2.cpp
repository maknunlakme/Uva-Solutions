#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test_case,score;
    char line[85];
    int i,j,length;
    j = 0;
    score = 0;
    int total_score[10000] = {0};
    cin>>test_case;
    {
        while(test_case!=0)
        {
            cin>>line;
            length = strlen(line);
            for(i=0;i<length;i++)
            {
                if(line[i]=='O')
                {
                    score++;
                    total_score[j] += score;
                }
                else if(line[i]=='X')
                {
                    score = 0;
                }
            }
            j++;
            test_case--;
            score = 0;
        }
        for(i=0;i<j;i++)
        {
            cout<<total_score[i]<<endl;
        }

    }
    return 0;
}
