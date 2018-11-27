#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int length,counter=0;
    int color[1010];
    int code[1010];
    int guess[1010];
    while(1)
    {
        counter++;
        scanf("%d",&length);
        if(length==0)
        {
            break;
        }
        for(int i=0;i<length;i++)
        {
            scanf("%d",&color[i]);
        }
        printf("Game %d:\n",counter);
        while(1)
        {
            int breaker=0;
            int match=0,hint=0;
            for(int j=0;j<length;j++)
            {
                scanf("%d",&guess[j]);
                if(guess[j]==0)
                {
                    breaker++;
                }
            }
            if(breaker==length)
            {
                break;
            }
            for(int i=0;i<length;i++)
            {
                code[i]=color[i];
            }
            for(int j=0;j<length;j++)
            {
                if(code[j]==guess[j]&&code[j]>0&&guess>0)
                {
                    match++;
                    code[j]=0;
                    guess[j]=0;
                }
            }
            for(int j=0;j<length;j++)
            {
                for(int k=0;k<length;k++)
                {
                    //cout<<"code "<<code[j]<<" guess "<<guess[k]<<endl;
                    if(code[j]==guess[k]&&code[j]>0&&guess[k]>0)
                    {
                        hint++;
                        //cout<<"Hint"<<endl;
                        code[j]=0;
                        guess[k]=0;
                    }
                }
            }
            printf("    (%d,%d)\n",match,hint);
        }
    }
    return 0;
}
