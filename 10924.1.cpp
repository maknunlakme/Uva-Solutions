#include<iostream>
#include<cmath>
#include<cstring>
int main()
{
    char word[30];
    while(std::cin>>word)
    {
        int sum = 0;
        int length = strlen(word);
        for(int i=0;i<length;i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            {
                sum += (word[i] - 96);
            }
            else if(word[i]>='A'&&word[i]<='Z')
            {
                sum += (word[i] - 38);
            }
        }
        bool prime = true;
        double root = sum;
        double sqrtroot = sqrt(root);
        for(int i=2;i<=sqrtroot;i++)
        {
            if(sum%i==0)
            {
                prime = false;
                break;
            }
        }
        if(prime==true)
        {
            std::cout<<"It is a prime word."<<std::endl;
        }
        else
        {
            std::cout<<"It is not a prime word."<<std::endl;
        }
    }
    return 0;
}
