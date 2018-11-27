#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int test,length[2],i,j,k,hand,add_length;
    string digit[2],temp;
    string add('\0');
    cin>>test;
    while(test!=0)
    {

        for(i=0;i<2;i++)
        {
            cin>>digit[i];
            length[i] = digit[i].length();
        }
        hand = 0;
        if(length[0]>=length[1])
        {
            for(i=0;i<length[1];i++)
            {
                temp = digit[0][i] + digit[1][i] - '0' + hand;
                hand = 0;
                cout<<"temp :"<<temp<<endl;
                cout<<"digit 0 :"<<digit[0][i]<<endl;
                cout<<"digit 1 :"<<digit[1][i]<<endl;
                if(temp>"9")
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
                cout<<"add :"<<add[i]<<endl;
            }

            while(i<length[0])
            {
                temp = digit[0][i] + hand;
                hand = 0;
                cout<<"temp :"<<temp<<endl;
                cout<<"digit 0 :"<<digit[0][i]<<endl;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
                cout<<"add :"<<add[i]<<endl;
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
                cout<<"temp :"<<temp<<endl;
                cout<<"digit 0 :"<<digit[0][i]<<endl;
                cout<<"digit 1 :"<<digit[1][i]<<endl;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
                cout<<"add :"<<add[i]<<endl;
            }

            while(i<length[1])
            {
                temp = digit[1][i] + hand;
                hand = 0;
                cout<<"temp :"<<temp<<endl;
                cout<<"digit 1 :"<<digit[1][i]<<endl;
                if(temp>57)
                {
                    temp-=10;
                    hand = 1;
                }
                add[i] = temp;
                cout<<"add :"<<add[i]<<endl;
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
        cout<<"add :"<<add<<endl;
        for(i=0;i<add_length+3;i++)
        {
            add[i] = '\0';
        }
        test--;
    }
    return 0;
}
