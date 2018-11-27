#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

vector<string>arr;
int counter[110];
string line;

int main()
{
    int i,j,k,l,ans,maxi;
    bool double_break=false;
    while(1)
    {
        ans=0;
        arr.clear();
        memset(counter,0,sizeof counter);
        while(1)
        {
            cin>>line;
            if(line[0]=='e')
                break;
            if(line[0]=='#')
            {
                double_break=true;
                break;
            }
            arr.push_back(line);
        }
        if(double_break==true)
            break;
        for(i=0; i<arr.size(); i++)
        {
            for(j=0; j<arr.size(); j++)
            {
                if(i!=j)
                {
                    for(k=0; k<arr[i].size(); k+=4)
                    {
                        for(l=0; l<arr[j].size(); l+=4)
                        {
                            if(arr[i][k]==arr[j][l] and
                                    arr[i][k+1]==arr[j][l+1] and
                                    arr[i][k+2]==arr[j][l+2])
                            {
                                counter[i]++;
                                //cerr<<"AAA "<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                            }
                        }
                    }
                }
            }
        }
        maxi=counter[0];
        ans=0;
        for(i=1; i<arr.size(); i++)
        {
            //cerr<<"RR "<<i<<" "<<counter[i]<<endl;
            if(maxi<counter[i])
            {
                maxi=counter[i];
                ans=i;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
