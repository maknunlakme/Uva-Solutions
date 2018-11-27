#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<limits>
using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.get();
    while(test--)
    {
        string line1,line2;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin,line1);
        //cout<<"line 1 : "<<line1<<endl;
        getline(cin,line2);
        //cout<<"line 2 : "<<line2<<endl;
        vector<string>permuted;
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
        length=line2.length();

        int j=0;
        int k=j;
        char temp2[1000];
        for(int i=0;i<length;i++,j++)
        {
            if(line2[i]==' ')
            {
                size_t slength = line2.copy(temp2,j-k,k);
                temp2[slength]='\0';
                permuted.push_back(temp2);
                k=j+1;
            }
        }
        size_t slength = line2.copy(temp2,j-k,k);
        temp2[slength]='\0';
        permuted.push_back(temp2);
        int indexsize=index.size();
        map<int,string> some;
        map<int,string>::iterator it;
        for(int i=0;i<indexsize;i++)
        {
            //cout<<"index : "<<index[i]<<" permuted : "<<permuted[i]<<endl;
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
