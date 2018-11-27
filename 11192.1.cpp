#include<iostream>
#include<cstring>
int main()
{
    while(1)
    {
        int groupnumber;
        char line[150];
        char reversed[150];
        std::cin>>groupnumber;
        if(groupnumber==0)
        {
            break;
        }
        std::cin>>line;
        int k=0;
        int length = strlen(line);
        int group = length/groupnumber;
        for(int i=0;i<length;i=i+group)
        {
            for(int j=group+i-1;j>=i;j--)
            {
                reversed[k] = line[j];
                k++;
            }
        }
        reversed[k] = '\0';
        std::cout<<reversed<<std::endl;
    }
    return 0;
}
