#include<iostream>
#include<cstring>
#include<map>
#include<limits>
using namespace std;
int main()
{
    int test,number,counter,length,i;
    map<char,char>nummap;
    map<string,int>matching;
    map<string,int>::iterator it;
    bool printing;
    nummap['A']='2',nummap['B']='2';nummap['C']='2',nummap['2']='2';
    nummap['D']='3',nummap['E']='3';nummap['F']='3',nummap['3']='3';
    nummap['G']='4',nummap['H']='4';nummap['I']='4',nummap['4']='4';
    nummap['J']='5',nummap['K']='5';nummap['L']='5',nummap['5']='5';
    nummap['M']='6',nummap['N']='6';nummap['O']='6',nummap['6']='6';
    nummap['P']='7',nummap['R']='7';nummap['S']='7',nummap['7']='7';
    nummap['T']='8',nummap['U']='8';nummap['V']='8',nummap['8']='8';
    nummap['W']='9',nummap['X']='9';nummap['Y']='9',nummap['9']='9';
    nummap['1']='1',nummap['0']='0';
    char line[200],numline[200];
    cin>>test;
    while(test--)
    {
        cin>>number;
        //cout<<"taking NUmber"<<endl;
        printing=false;
        while(number--)
        {
            cin>>line;
            length=strlen(line);
            counter=0;
            for(i=0;i<length;i++)
            {
                if(line[i]!='-')
                {
                    numline[counter]=nummap[line[i]];
                    //cout<<line[i]<<" "<<numline[counter]<<" "<<nummap[line[i]]<<endl;
                    counter++;
                }
                if(counter==3)
                {
                    numline[counter]='-';
                    counter++;
                }
            }
            numline[counter]='\0';
            //cout<<"n "<<numline<<endl;
            if(matching[numline])
            {
                matching[numline]++;
            }
            else
            {
                matching[numline]=1;
            }
        }
        for(it=matching.begin();it!=matching.end();it++)
        {
            if(it->second>1)
            {
                cout<<it->first<<" "<<it->second<<endl;
                printing=true;
            }
        }
        if(printing==false)
        {
            cout<<"No duplicates."<<endl;
        }
        if(test>0)
        {
            cout<<endl;
        }
        matching.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    return 0;
}
