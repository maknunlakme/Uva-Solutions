#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int hh,mm,ss;
    long long int hh2=10000;
    long long int mm2=10000;
    long long int ss2=10000;
    long long int km=0;
    long long int km2;
    char ch;
    stringstream SS;
    string line,kilo;
    double dis=0.0;
    while(cin>>line)
    {
        getline(cin,kilo);
        if(!kilo.empty())
        {
            km = atoi(kilo.c_str());
        }
        SS.clear();
        SS.str();
        SS<<line;
        SS>>hh>>ch>>mm>>ch>>ss;
        //cout<<hh<<" "<<mm<<" "<<ss<<" "<<km<<endl;
        if(hh2<10000)
        {
            dis+=(static_cast<float>(hh-hh2)+(static_cast<float>(mm-mm2)/60)+(static_cast<float>(ss-ss2)/3600))*km2;
            //cout<<"dis "<<dis<<endl;
            //cout<<"hh2 "<<hh-hh2<<" mm2 "<<mm-mm2<<" ss2 "<<ss-ss2<<" km "<<km<<endl;
        }
        hh2=hh;
        mm2=mm;
        ss2=ss;
        km2=km;
        if(kilo.empty())
        {
            cout<<line<<" ";
            cout<<fixed<<setprecision(2)<<dis<<" km"<<endl;
        }
    }
    return 0;
}
