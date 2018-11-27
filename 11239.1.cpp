#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

map<string,int>listing;
map<string,int>mark;
map<string,string>studentmark;
map<string,int>::iterator it;
vector<pair<int,string> > pairing;
struct comparing
{
    bool operator()(const pair<int,string> &left, const pair<int,string> &right)
    {
        if(left.first==right.first)
        {
            return left.second<right.second;
        }
        else
        {
            return left.first > right.first;
        }
    }
};
int main()
{
    int i,loop=1,length;
    string name,project,temp;
    while(loop)
    {
        while(1)
        {
            getline(cin,temp);
            if(temp=="0")
            {
                loop=0;
                break;
            }
            else if(temp=="1")
            {
                break;
            }
            else
            {
                if(temp[0]>='A'&&temp[0]<='Z')
                {
                    project=temp;
                    if(!listing[project])
                    {
                        listing[project]=0;
                        //cout<<"projcet "<<project<<" "<<listing[project]<<endl;
                    }
                }
                else if(mark[temp]==1&&studentmark[temp]!=project)
                {
                    listing[studentmark[temp]]--;
                    mark[temp]=2;
                }
                else if(!mark[temp])
                {
                    listing[project]++;
                    mark[temp]=1;
                    studentmark[temp]=project;
                }
            }
        }
        if(loop!=0)
        {
            for(it=listing.begin(); it!=listing.end(); it++)
            {
                //cout<<"hey "<<it->first<<" "<<it->second<<endl;
                pairing.push_back(make_pair(it->second,it->first));
            }
            sort(pairing.begin(),pairing.end(),comparing());
            length=pairing.size();
            for(i=0; i<length; i++)
            {
                cout<<pairing[i].second<<" "<<pairing[i].first<<endl;
            }
        }
        listing.clear();
        mark.clear();
        pairing.clear();
    }
    return 0;
}
