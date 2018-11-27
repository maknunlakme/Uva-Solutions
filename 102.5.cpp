#include<iostream>
#include<string>
int main()
{
    long int bin[3][3],i,j,mini,number,moves;
    std::string color;
    while(std::cin>>bin[0][0])
    {
        mini = 9999999999999;
        std::cin>>bin[0][1];
        std::cin>>bin[0][2];
        std::cin>>bin[1][0];
        std::cin>>bin[1][1];
        std::cin>>bin[1][2];
        std::cin>>bin[2][0];
        std::cin>>bin[2][1];
        std::cin>>bin[2][2];
        moves = bin[1][0]+bin[2][0]+bin[0][1]+bin[1][1]+bin[0][2]+bin[2][2];
        //std::cout<<moves<<std::endl;
        if(mini>moves)
        {
            mini = moves;
            color = "BCG";
        }
        moves = bin[1][0]+bin[2][0]+bin[0][1]+bin[2][1]+bin[0][2]+bin[1][2];
        //std::cout<<moves<<std::endl;
        if(mini>moves)
        {
            mini = moves;
            color = "BGC";
        }
        moves = bin[0][0]+bin[2][0]+bin[0][1]+bin[1][1]+bin[1][2]+bin[2][2];
        //std::cout<<moves<<std::endl;
        if(mini>moves)
        {
            mini = moves;
            color = "CBG";
        }
        moves = bin[0][0]+bin[1][0]+bin[0][1]+bin[2][1]+bin[1][2]+bin[2][2];
        //std::cout<<moves<<std::endl;
        if(mini>moves)
        {
            mini = moves;
            color = "CGB";
        }
        moves = bin[0][0]+bin[2][0]+bin[1][1]+bin[2][1]+bin[0][2]+bin[1][2];
        //std::cout<<moves<<std::endl;
        if(mini>moves)
        {
            mini = moves;
            color = "GBC";
        }
        moves = bin[0][0]+bin[1][0]+bin[1][1]+bin[2][1]+bin[0][2]+bin[2][2];
        //std::cout<<moves<<std::endl;
        if(mini>moves)
        {
            mini = moves;
            color = "GCB";
        }
        std::cout<<color<<" "<<mini<<std::endl;
    }
}
