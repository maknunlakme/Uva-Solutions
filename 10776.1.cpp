#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

bool used[50];
char line[50];
int length,counter;
string number;
void per(int id)
{
    //cerr<<"PER "<<id<<" "<<counter<<endl;
    int i;
    if(id==counter)
    {
        cout<<number<<endl;
        return;
    }

    for(i=id; i<length; i++)
    {
        //cerr<<"BLING "<<i<<" "<<line[i]<<" "<<id<<endl;
        if(!used[i]&&number[id-1]<=line[i])
        {
            used[i]=1;
            number.push_back(line[i]);
            per(id+1);
            used[i]=0;
            number.pop_back();
            while(line[i]==line[i+1]&&i+1<length)
            {
                i++;
                //cerr<<"I "<<i<<" "<<id<<" "<<number<<endl;
            }
        }

    }
}
int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    char i;
    while(cin>>line>>counter)
    {
        length=strlen(line);
        sort(line,line+length);
        per(0);
        //cerr<<"line "<<line<<" "<<counter<<endl;

    }
    return 0;
}
