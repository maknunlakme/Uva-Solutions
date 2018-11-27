#include<iostream>
using namespace std;

int arr[15][5];
int ans,n;
bool mark[10000];

int string_to_number(string a)
{
    int temp=0;
    for(int i=0;i<4;i++)
    {
        temp=temp*10+(a[i]-'0');
    }
    return temp;
}

string number_to_string(int a)
{
    char ch[5];
    ch[4]='\0';
    for(int i=3;i>=0;i--)
    {
        ch[i]=a%10+'0';
        a/=10;
    }
    //cerr<<"DDD "<<ch<<endl;
    return ch;
}

void rec(int value,int time)
{
    bool done=false;
    //cerr<<"RR "<<value<<" "<<time<<endl;
    if(mark[value]==true)
    {
        done=true;
        ans=9999;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==value)
        {
            if(time>=arr[i][1] and time<=arr[i][2])
            {
                done=true;
                mark[value]=true;
                rec(arr[i][3],time);
                mark[value]=false;
            }
        }
    }
    if(done==false)
    {
        ans=value;
        return;
    }
}

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int test,i,c,d,counter=0;
    cin>>test;
    cout<<"CALL FORWARDING OUTPUT"<<endl;
    while(test--)
    {
        counter++;
        cout<<"SYSTEM "<<counter<<endl;
        i=0;
        while(1)
        {

            cin>>arr[i][0];
            if(arr[i][0]==0) break;
            cin>>arr[i][1]>>arr[i][2]>>arr[i][3];
            arr[i][2]+=arr[i][1];
            i++;
            //cout<<"DD "<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<" "<<arr[i][3]<<endl;
        }
        n=i+1;
        while(1)
        {
            string a,b;
            cin>>a;
            if(a=="9000") break;
            cin>>b;
            c=string_to_number(a);
            d=string_to_number(b);
            rec(d,c);
            cout<<"AT "<<a<<" CALL TO "<<b<<" RINGS "<<number_to_string(ans)<<endl;

        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
