#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> word;
    char temp;
    string line;
    map<char,int>puzzle;
    while(1)
    {
        cin>>line;
        if(line=="#")
        {
            break;
        }
        word.push_back(line);
    }
    while(1)
    {
        cin>>line;
        if(line=="#")
        {
            break;
        }
        length=line.length();
        dictolength=length=word.size();
        for(i=0;i<dictolength;i++)
        {
            wordlength=word[i].length();
            for(j=0;j<wordlength;j++)
            {
                for(k=0;k<length;k++)
                {
                    if(word[i][j]==line[k])
                    {
                        counter++;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
