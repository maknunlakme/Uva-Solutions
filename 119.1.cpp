#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string name[20000],line;
    map<string,long long int> group;
    long long int number,i,j,people,money,counter=0,temp1,temp2;
    while(cin>>number)
    {
        for(i=0; i<number; i++)
        {
            cin>>name[i];
            group[name[i]]=0;
        }
        for(i=0; i<number; i++)
        {
            cin>>line>>money>>people;
            if(people!=0)
            {
                temp1=money/people;
                temp2=temp1*people;
                group[line]-=temp2;
                line.clear();
                for(j=0; j<people; j++)
                {
                    cin>>line;
                    group[line]+=temp1;
                    line.clear();
                }
            }
            line.clear();
        }
        if(counter!=0)
        {
            cout<<endl;
        }
        for(i=0; i<number; i++)
        {
            cout<<name[i]<<" "<<group[name[i]]<<endl;
        }
        group.clear();
        counter++;
    }
    return 0;
}
