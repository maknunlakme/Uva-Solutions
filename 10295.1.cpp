#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    map<string,int>haypoint;
    string line;
    vector<string>job;
    int m,n,i,j,money,total,length;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        cin>>line>>money;
        haypoint[line]=money;
    }
    for(i=0;i<n;i++)
    {
        getline(cin,line,'.');
        istringstream ss(line);
        copy(istream_iterator<string>(ss),istream_iterator<string>(),back_inserter(job));
        length=job.size();
        total=0;
        for(j=0;j<length;j++)
        {
            if(haypoint[job[j]])
            {
                total+=haypoint[job[j]];
            }
        }
        cout<<total<<endl;
        job.clear();
    }
    return 0;
}
