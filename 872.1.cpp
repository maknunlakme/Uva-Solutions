#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
#include<map>
#include<algorithm>
#define X 50
using namespace std;

int mat[X][X];
vector<string>arr;
map<string,int>mark;
int visit[X];
char answer[X];
int length;
bool no;

int check(int pos,int len)
{
    //cerr<<"BLAH "<<pos<<" "<<len<<endl;
    int i;
    for(i=0;i<len;i++)
    {
        char ch=answer[i];
        string temp;
        temp.push_back(ch);
        if(mat[pos][mark[temp]]==1) return 0;
    }
    return 1;
}

void rec(int pos)
{
    //cerr<<"HI "<<pos<<" "<<length<<endl;
    int i,temp;
    if(pos==length)
    {
        cout<<answer[0];
        for(i=1;i<length;i++) cout<<" "<<answer[i];
        cout<<endl;
        no=false;
        return;
    }
    for(i=0;i<length;i++)
    {
        //cerr<<"BLING "<<arr[i]<<endl;
        temp=mark[arr[i]];
        //cerr<<"TT "<<temp<<" "<<arr[i]<<" "<<visit[temp]<<" "<<check(temp,pos)<<endl;
        if(visit[temp]==0 and check(temp,pos)==1)
        {
            visit[temp]=1;
            answer[pos]=arr[i][0];
            //cerr<<"PP "<<pos<<" "<<temp<<" "<<arr[i][0]<<endl;
            rec(pos+1);
            visit[temp]=0;
        }
    }
}


int main()
{
    string line,a,b;
    int counter,i,case_counter=0;
    int test;
    cin>>test;
    cin.ignore(100,'\n');
    while(test--)
    {
        memset(mat,0,sizeof mat);
        memset(visit,0,sizeof visit);
        case_counter++;
        no=true;
        if(case_counter>1) cout<<endl;
        counter=1;
        stringstream ss,pp;
        cin.ignore(100,'\n');
        getline(cin,line);
        //cerr<<"sss "<<line<<endl;
        ss<<line;
        while(ss>>a)
        {
            //cerr<<"AA "<<a<<endl;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        length=arr.size();
        for(i=0;i<length;i++)
        {
            if(!mark[arr[i]]) mark[arr[i]]=counter++;
        }
        getline(cin,line);
        //cerr<<"PPPP "<<line<<endl;
        pp<<line;
        while(pp>>a)
        {
            string temp1,temp2;
            temp1.push_back(a[0]);
            temp2.push_back(a[2]);
            mat[mark[temp1]][mark[temp2]]=1;
        }
        rec(0);
        arr.clear();
        mark.clear();
        if(no==true) cout<<"NO"<<endl;
    }
    return 0;
}
