#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,count_ugly,temp;
    n = 2;
    count_ugly = 1;
    while(count_ugly<1500)
    {
        temp = n;
        while(temp%2==0||temp%3==0||temp%5==0)
        {
            if(temp%2==0)
            {
                temp = temp / 2;
            }
            if(temp%3==0)
            {
                temp = temp / 3;
            }
            if(temp%5==0)
            {
                temp = temp / 5;
            }
        }
        if(temp==1)
        {
            cout<<n<<endl;
            count_ugly++;
        }
        n++;
    }
    printf("The 1500'th ugly number is %d.\n",n);

    return 0;
}

