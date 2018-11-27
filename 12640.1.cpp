#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

vector<int>a;

int kadane()
{
    int i,max_so_far=0,max_ending_here=0,length;
    length=a.size();
    for(i=0;i<length;i++)
    {
        max_ending_here+=a[i];
        if(max_ending_here<0)
        {
            max_ending_here=0;
        }
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
    }
    return max_so_far;
}
int main()
{
    string line;
    int temp;
    while(getline(cin,line))
    {
        stringstream stream(line);
        while(stream>>temp)
        {
            a.push_back(temp);
        }
        cout<<kadane()<<endl;
        a.clear();
    }
    return 0;
}
