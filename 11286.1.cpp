#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

map<string,int>course;
vector<string>serial;
int main()
{
    string temp,total;
    int n,i,j,maxi,maxitotal=0;
    while(1)
    {
        cin>>n;
        maxi=1;
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>temp;
                serial.push_back(temp);
            }
            sort(serial.begin(),serial.end());
            total=serial[0];
            for(j=1;j<5;j++)
            {
                total+=serial[j];
            }
            //cout<<total<<endl;
            if(!course[total])
            {
                course[total]=1;
            }
            else
            {
                course[total]++;
                if(maxi<course[total])
                {
                    maxi=course[total];
                }
            }
            serial.clear();
        }
        maxitotal+=maxi;
        cout<<maxi<<endl;
    }
    return 0;
}
