#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int test,length[2],i,j,hand,add_length,result_length;
    char digit[2][220],temp;
    char add[250] = {'\0'};
    cin>>test;
    while(test!=0)
    {

        for(i=0;i<2;i++)
        {
            cin>>digit[i];
            length[i] = strlen(digit[i]);
        }
        hand = 0;
        if(length[0]>=length[1])
        {
            for(i=0;i<length[1];i++)
            {
                temp = digit[0][i] + digit[1][i] - '0' + hand;
                hand = 0;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
            }

            while(i<length[0])
            {
                temp = digit[0][i] + hand;
                hand = 0;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
                i++;
            }
            if(hand==1)
            {
                add[i] = '1';
                add[i+1] = '\0';
            }
            else
            {
                add[i] = '\0';
            }
        }
        else if(length[0]<length[1])
        {
            for(i=0;i<length[0];i++)
            {
                temp = digit[0][i] + digit[1][i] - '0' + hand;
                hand = 0;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
            }

            while(i<length[1])
            {
                temp = digit[1][i] + hand;
                hand = 0;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
                i++;
            }
            if(hand==1)
            {
                add[i] = '1';
                add[i+1] = '\0';
            }
            else
            {
                add[i] = '\0';
            }
        }
        add_length = strlen(add);
        string result(add,add+add_length);
        result_length = result.length();
        i=0;
        while(i<result_length)
        {
            if(result[i]=='0'&&i==0)
            {
                result.erase(0,1);
                result_length--;
            }
            else
            {
                i++;
            }
        }
        cout<<result<<endl;
        for(i=0;i<add_length+3;i++)
        {
            add[i] = '\0';
        }
        test--;
    }
    return 0;
}
