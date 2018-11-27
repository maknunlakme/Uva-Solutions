#include<iostream>
#include<string>
int main()
{
    std::string s,t;
    while(std::cin>>s&&std::cin>>t)
    {
        int slength = s.length();
        int tlength = t.length();
        int i=0;
        int j;
        for(j=0;j<tlength;j++)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            if(i>=slength)
            {
                std::cout<<"Yes"<<std::endl;
                break;
            }
        }
        if(j>=tlength)
        {
            std::cout<<"No"<<std::endl;
        }
    }
    return 0;
}
