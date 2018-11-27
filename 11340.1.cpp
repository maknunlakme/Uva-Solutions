#include<iostream>
#include<vector>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
    int test,letter,lines,pairsize,stringsize;
    cin>>test;
    while(test--)
    {
        vector<pair<char,int>>paidchar;
        vector<string>stringlines;
        double cost=0.0;
        cin>>letter;
        while(letter--)
        {
            char tempchar;
            int tempint;
            cin>>tempchar;
            cin>>tempint;
            paidchar.push_back(make_pair(tempchar,tempint));
        }
        cin>>lines;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        while(lines--)
        {
            string tempstring;
            getline(cin,tempstring);
            stringlines.push_back(tempstring);
        }
        pairsize=paidchar.size();
        stringsize=stringlines.size();
        for(int i=0;i<pairsize;i++)
        {
            for(int j=0;j<stringsize;j++)
            {
                int length=stringlines[j].length();
                for(int k=0;k<length;k++)
                {
                    if(stringlines[j][k]==paidchar[i].first)
                    {
                        cost+=(paidchar[i].second*0.01);
                    }
                }
            }
        }
        cout<<fixed<<setprecision(2)<<cost<<"$"<<endl;
    }
}
