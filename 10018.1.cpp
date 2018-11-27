#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    unsigned long long int given_number,reversed_number,temp,rem,added_number;
    int length;
    char reversed;
    bool palindrome;
    while(test!=0)
    {
        reversed_number = 0;
        cin>>given_number;
        temp = given_number;
        palindrome=false;
        int counter=1;
        while(palindrome==false)
        {
            while(temp!=0)
            {
                rem = temp%10;
                reversed_number = reversed_number*10 + rem;
                temp/=10;
            }
            added_number = given_number + reversed_number;
            temp = added_number;
            given_number=added_number;
            reversed_number=0;
            char copy_string[30];
            for(int i=0;i<30;i++)
            {
                copy_string[i]='\0';
            }
            sprintf(copy_string, "%lld", added_number);
            length = strlen(copy_string);
            palindrome=true;
            for(int i=0,j=length-1;i<=j;i++,j--)
            {
                if(copy_string[i]!=copy_string[j])
                {
                    palindrome=false;
                    counter++;
                    break;
                }
            }
        }
        cout<<counter<<" "<<added_number<<endl;
        test--;
    }
    return 0;
}
