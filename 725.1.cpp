#include<iostream>
#include<vector>
using namespace std;

vector<int>arr;
bool marker[100000];

bool check(int number,int blah)
{
    //cerr<<"AA "<<number<<" "<<blah<<endl;
    int mark[15]={0};
    int temp,counter=0;
    while(number>0)
    {
        temp=number%10;
        //cerr<<"DD "<<temp<<" "<<number<<endl;
        if(mark[temp]==0)
        {
            //cerr<<"JJ "<<endl;
            mark[temp]=1;
            number/=10;
            counter++;
        }
        else return false;
    }
    //cerr<<"aaa "<<mark[0]<<endl;
    if(counter==4 and mark[0]==0) mark[0]=1;
    else if (counter==4 and mark[0]==1) return false;
    counter=0;
    while(blah>0)
    {
        temp=blah%10;
        if(mark[temp]==0)
        {
            mark[temp]=1;
            blah/=10;
            counter++;
        }
        else return false;
    }
    if(counter==4 and mark[0]==0) mark[0]=1;
    else if (counter==4 and mark[0]==1) return false;
    return true;
}

string num_to_string(int n)
{
    string temp="00000";
    int i=4;
    while(n>0)
    {
        temp[i]=(n%10)+'0';
        n/=10;
        i--;
    }
    //cerr<<"RR "<<temp<<endl;
    return temp;
}


int main()
{
    #ifdef maknun
     freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,i,j,blah,c=0;
    bool printed;
    while(1)
    {
        cin>>n;
        c++;
        //cerr<<"RR "<<n<<" "<<arr.size()<<endl;
        printed=false;
        if(n==0) break;
        if(c!=1) cout<<endl;
        for(i=1234;i<98765;i++)
        {
            blah=n*i;
            //cerr<<"RR "<<blah<<" "<<i<<" "<<check(i,blah)<<endl;
            if(blah!=i and blah<=98765 and check(i,blah)==1)
            {
                printed=true;
                cout<<num_to_string(blah)<<" / "<<num_to_string(i)<<" = "<<n<<endl;
            }
        }
        if(printed==false) cout<<"There are no solutions for "<<n<<"."<<endl;

    }
    return 0;
}
