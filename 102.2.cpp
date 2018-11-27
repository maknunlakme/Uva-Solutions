#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,k,l,max,no_check;
    max =0;
    int move[3] = {0};
    unsigned int bin1[3], bin2[3], bin3[3];
    string binstring[3];
    no_check =0;
    no_check = false;
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>bin1[j];
        }
        for(j=0;j<3;j++)
        {
            cin>>bin2[j];
        }
        for(j=0;j<3;j++)
        {
            cin>>bin3[j];
        }

        for(j=0;j<3;j++)
    {
        cout<<bin1[j]<<endl;
        cout<<bin2[j]<<endl;
        cout<<bin3[j]<<endl;

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

            for(l=0;l<3;l++)
            {
                if(max==bin1[l])
                {
                    cout<<bin1[l]<<endl;
                    cout<<bin2[l]<<endl;
                    cout<<bin3[l]<<endl;
                    cout<<"max 1 "<<max<<endl;
                    move[i] += bin2[l] + bin3[l];
                    cout<<"move 1 "<<move[i]<<endl;
                    bin1[l] = 0;
                    bin2[l] = 0;
                    bin3[l] = 0;
                    max = 0;
                    break;
                }
                else if(max==bin2[l])
                {
                    cout<<bin1[l]<<endl;
                    cout<<bin2[l]<<endl;
                    cout<<bin3[l]<<endl;
                    cout<<"max 2 "<<max<<endl;
                    move[i] += bin1[l] + bin3[l];
                    cout<<"move 2 "<<move[i]<<endl;
                    bin2[l] = 0;
                    bin2[l] = 0;
                    bin3[l] = 0;
                    max = 0;
                    break;
                }
                else if(max==bin3[l])
                {
                    cout<<bin1[l]<<endl;
                    cout<<bin2[l]<<endl;
                    cout<<bin3[l]<<endl;
                    cout<<"max 3 "<<max<<endl;
                    move[i] += bin1[l] + bin2[l];
                    cout<<"move 3 "<<move[i]<<endl;
                    bin3[l] = 0;
                    bin2[l] = 0;
                    bin3[l] = 0;
                    max = 0;
                    break;
                }
                cout<<"l = "<<l<<endl;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<bin1[i]<<endl;
        cout<<bin2[i]<<endl;
        cout<<bin3[i]<<endl;

    }
    cout<<"move total "<<move[0]<<endl;
    return 0;
}
