#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,sum;
    string line;
    while(getline(cin,line))
    {
        for(i=0; i<line.size(); i++)
        {
            if(line[i]>='1' and line[i]<='9')
            {
                sum=0;
                while(line[i]>='1' and line[i]<='9')
                {
                    sum+=line[i]-'0';
                    i++;
                }
                if(line[i]=='b')
                {
                    for(j=0; j<sum; j++)
                    {
                        cout<<" ";
                    }
                }
                else
                {
                    for(j=0; j<sum; j++)
                    {
                        cout<<line[i];
                    }
                }
            }
            else if(line[i]=='!')
            {
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
