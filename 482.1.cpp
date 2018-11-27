#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.get();
    while(test--)
    {
        string line1,line2;
        getline(cin,line1);
        getline(cin,line2);
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
        double temp2=0.0;
        int decimal=10;
        int divide=1;
        length=line2.length();
        for(int i=0;i<length;i++)
        {
            cout<<"line "<<i<<": "<<line2[i]<<endl;
            if(line2[i]>='0'&&line2[i]<='9')
            {
                temp2=(temp2*decimal)+((line2[i]-'0')/divide);
                cout<<"add : "<<line2[i]-'0'<<" divide :"<<divide<<endl;
                if(divide!=1)
                {
                    divide*=10;
                }
                cout<<"Temp :"<<temp2<<endl;
            }
            else if(line2[i]=='.')
            {
                decimal=1;
                divide=10;
            }
            else
            {
                permuted.push_back(temp2);
                temp2=0.0;
                decimal=10;
                divide=1;
            }
        }
        permuted.push_back(temp2);
        int indexsize=index.size();
        for(int i=0;i<indexsize;i++)
        {
            cout<<"index "<<index[i]<<endl;
        }
        for(int i=0;i<indexsize;i++)
        {
            cout<<"permuted "<<permuted[i]<<endl;
        }
    }
}
