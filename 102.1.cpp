#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,k,l,max,move[3];
    max =0;
    move[3] ={0};
    unsigned int bin1[3], bin2[3], bin3[3];
    string binstring[3];
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>bin1[j];
            cin>>bin2[j];
            cin>>bin3[j];
        }
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(bin1[k]>max)
                {
                    max = bin1[k];
                }
                if(bin2[k]>max)
                {
                    max = bin2[k];
                }
                if(bin3[k]>max)
                {
                    max = bin3[k];
                }
            }
            cout<<max<<endl;
            for(l=0;l<3;l++)
            {
                if(max==bin1[l])
                {
                    move[i] += bin2[l] + bin3[l];
                    bin1[l] = 0;
                }
                if(max==bin2[l])
                {
                    move[i] += bin1[l] + bin3[l];
                    bin2[l] = 0;
                }
                if(max==bin3[l])
                {
                    move[i] += bin1[l] + bin2[l];
                    bin3[l] = 0;
                }
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<bin1[i]<<endl;
        cout<<bin2[i]<<endl;
        cout<<bin3[i]<<endl;

    }
    return 0;
}
