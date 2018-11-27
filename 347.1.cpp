#include<iostream>
#include<vector>
using namespace std;

bool blah[11000000];

bool check(int number)
{
    //cerr<<"RR "<<number<<endl;
    vector<int>arr;
    int temp,pos,start,i,counter;
    int marker[10]={0};
    while(number>0)
    {
        temp=number%10;
        if(temp==0) return 0;
        if(marker[temp]!=0) return 0;
        else marker[temp]=1;
        arr.push_back(temp);
        number/=10;
    }
    start=arr[arr.size()-1];
    pos=arr.size()-1;
    counter=0;
    int mark[10]={0};
    mark[pos]=1;
    //cerr<<"SSS "<<start<<" "<<pos<<endl;
    while(counter!=arr.size())
    {
        while(start>0)
        {
            start--;
            pos--;
            //cerr<<"AAA "<<start<<" "<<pos<<endl;
            if(pos==-1) pos=arr.size()-1;
        }
        start=arr[pos];
        mark[pos]=1;
        counter++;
        //cerr<<"BBB "<<start<<" "<<pos<<" "<<counter<<endl;
    }
    if(pos!=arr.size()-1) return 0;
    for(i=0;i<arr.size();i++)
    {
        if(mark[i]==0) return 0;
    }
    return 1;
}


int main()
{
    int n,i,counter=0;
    for(i=9;i<=9999999;i++)
    {
        blah[i]=check(i);
    }
    while(1)
    {
        counter++;
        cin>>n;
        if(n==0) return 0;
        for(i=n+1;blah[i]!=true;i++);
        cout<<"Case "<<counter<<": "<<i<<endl;
    }
    return 0;
}
