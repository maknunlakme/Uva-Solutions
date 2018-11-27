#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<limits>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string line1,line2;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.get();
        getline(cin,line1);
        vector<double>permuted;
        vector<long long int> index;
        int length=line1.length();
        int temp=0;
        for(int i=0;i<length;i++)
        {
            if(line1[i]>='0'&&line1[i]<='9')
            {
                temp=(temp*10)+line1[i]-'0';
            }
            else
            {
                index.push_back(temp);
                temp=0;
            }
        }
        index.push_back(temp);
        int indexsize=index.size();
        for(int i=0;i<indexsize;i++)
        {
            double temp2;
            cin>>temp2;
            permuted.push_back(temp2);
        }
        map<int,double> some;
        map<int,double>::iterator it;
        for(int i=0;i<indexsize;i++)
        {
            some[index[i]]=permuted[i];
        }
        for(it=some.begin();it!=some.end();it++)
        {
            cout<<(*it).second<<endl;
        }
        if(test!=0)
        {
            cout<<endl;
        }
        some.clear();
    }
    return 0;
}
