#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool comparison(const pair<int,int> &left,const pair<int,int> &right)
{
       if(left.second==right.second)
        {
            return left.first>right.first;
        }
        else
        {
            return left.second < right.second;
        }
}
struct comparing
{
    bool operator()(const pair<int,int> &left, const pair<int,int> &right)
    {
        if(left.second==right.second)
        {
            return left.first>right.first;
        }
        else
        {
            return left.second < right.second;
        }
    }
};

int main()
{
    string line;
    vector<pair<int,int> >sorting;
    map<int,int>letter;
    map<int,int>::iterator it;
    int length,i;
    bool printing=false;
    while(getline(cin,line))
    {
        if(printing==true)
        {
            cout<<endl;
        }
        length=line.length();
        for(i=0;i<length;i++)
        {
            if(!letter[line[i]])
            {
                letter[line[i]]=1;
            }
            else
            {
                letter[line[i]]++;
            }
        }
        for(it=letter.begin();it!=letter.end();it++)
        {
            sorting.push_back(make_pair(it->first,it->second));
        }
        sort(sorting.begin(),sorting.end(),comparing());
        length=sorting.size();
        for(i=0;i<length;i++)
        {
            cout<<sorting[i].first<<" "<<sorting[i].second<<endl;
        }
        letter.clear();
        sorting.clear();
        printing=true;
    }
    return 0;
}
