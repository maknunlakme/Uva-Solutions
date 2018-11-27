#include<iostream>
#include<string>
int main()
{
    std::string line,copied;
    bool palindrome;
    bool mirror_palindrome;
    bool mirror;
    bool mirror_string;
    while(getline(std::cin,line))
    {
        int length;
        palindrome = true;
        length = line.length();
        for(int i=0;i<length;i++)
        {
            if(line[i]!=line[length-1])
            {
                palindrome = false;
                break;
            }
            else
            {
                length--;
            }
        }
        if(palindrome==true)
        {
            mirror_palindrome = true;
            length = line.length();
            for(int i=0;i<length;i++)
            {
                if(line[i]=='B'||line[i]=='C'||line[i]=='D'||line[i]=='E'||line[i]=='F'||line[i]=='G'||line[i]=='J'||line[i]=='K'||line[i]=='L'||line[i]=='N'||line[i]=='P'||line[i]=='Q'||line[i]=='R'||line[i]=='S'||line[i]=='Z'||line[i]=='2'||line[i]=='3'||line[i]=='4'||line[i]=='5'||line[i]=='6'||line[i]=='7'||line[i]=='9'||line[i]=='0'||(line[i]>='a'&&line[i]<='z'))
                {
                    mirror_palindrome = false;
                    break;
                }
            }
            if(mirror_palindrome==true)
            {
                std::cout<<line<<" -- is a mirrored palindrome."<<std::endl;
            }
            else
            {
                std::cout<<line<<" -- is a regular palindrome."<<std::endl;
            }
        }
        else
        {
            mirror = true;
            copied = line;
            length = copied.length();
            for(int i=0;i<length;i++)
            {
                if(copied[i]=='3')
                {
                    copied[i]='E';
                }
                else if(copied[i]=='L')
                {
                    copied[i]='J';
                }
                else if(copied[i]=='2')
                {
                    copied[i]='S';
                }
                else if(copied[i]=='5')
                {
                    copied[i]='Z';
                }
            }
            for(int i=0;i<length;i++)
            {
                if(copied[i]!=copied[length-1])
                {
                    mirror = false;
                    break;
                }
                else
                {
                    length--;
                }
            }
            if(mirror==true)
            {
                int middle;
                mirror_string = true;
                length = copied.length();
                if(length%2!=0)
                {
                    middle = (length+1)/2;
                    middle--;
                    if(copied[middle]=='B'||copied[middle]=='C'||copied[middle]=='D'||copied[middle]=='E'||copied[middle]=='F'||copied[middle]=='G'||copied[middle]=='J'||copied[middle]=='K'||copied[middle]=='L'||copied[middle]=='N'||copied[middle]=='P'||copied[middle]=='Q'||copied[middle]=='R'||copied[middle]=='S'||copied[middle]=='Z'||copied[middle]=='2'||copied[middle]=='3'||copied[middle]=='4'||copied[middle]=='5'||copied[middle]=='6'||copied[middle]=='7'||copied[middle]=='9')
                    {
                        mirror_string = false;
                    }
                }
                for(int i=0;i<length;i++)
                {
                    if(copied[i]=='B'||copied[i]=='C'||copied[i]=='D'||copied[i]=='F'||copied[i]=='G'||copied[i]=='K'||copied[i]=='N'||copied[i]=='P'||copied[i]=='Q'||copied[i]=='R'||copied[i]=='4'||copied[i]=='6'||copied[i]=='7'||copied[i]=='9')
                    {
                        mirror_string = false;
                        break;
                    }
                }
                if(mirror_string==true)
                {
                    std::cout<<line<<" -- is a mirrored string."<<std::endl;
                }
                else
                {
                    std::cout<<line<<" -- is not a palindrome."<<std::endl;
                }
            }
            else
            {
                std::cout<<line<<" -- is not a palindrome."<<std::endl;
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}
