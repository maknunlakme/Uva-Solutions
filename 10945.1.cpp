#include<iostream>
#include<string>
int main()
{
    while(1)
    {
        std::string line;
        getline(std::cin,line);
        if(line=="DONE")
        {
            break;
        }
        int length = line.length();
        for(int i=0;i<length;i++)
        {
            if(line[i]=='.'||line[i]==','||line[i]=='?'||line[i]=='!'||line[i]==' ')
            {
                line.erase(i,1);
                length--;
                i--;
            }
            else if(isupper(line[i]))
            {
                line[i] = tolower(line[i]);
            }
        }
        bool palindrome = true;
        int j = length-1;
        for(int i=0;i<j;i++,j--)
        {
            if(line[i]!=line[j])
            {
                palindrome = false;
                break;
            }
        }
        if(palindrome==true)
        {
            std::cout<<"You won't be eaten!"<<std::endl;
        }
        else
        {
            std::cout<<"Uh oh.."<<std::endl;
        }
    }
}
