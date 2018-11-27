#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test_case;
    char line[85];
    int i,length,score,total_score;
    score =0;
    total_score = 0;
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
                    total_score += score;
                }
                else if(line[i]=='X')
                {
                    score = 0;
                }
            }
            test_case--;
            cout<<total_score<<endl;
            total_score = 0;
        }

    }
    return 0;
}
