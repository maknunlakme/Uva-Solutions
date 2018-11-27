#include<iostream>
#include<vector>
using namespace std;

int reversed(int n)
{
    int total=0,i=1;
    //cout<<" N "<<n<<endl;
    while(n>0)
    {
        total*=i;
        i=10;
        total+=n%10;
        n/=10;
    }
    //cout<<"T "<<total<<endl;
    return total;
}

int prime(int n)
{
    int i;
    if(n%2==0)
    {
        //cout<<"1"<<endl;
        return 0;
    }
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            //cout<<"2"<<endl;
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,newn,length,i;
    vector<int>careful;
    while(cin>>n)
    {
        careful.push_back(n);
    }
    length=careful.size();
    for(i=0; i<length; i++)
    {
        newn=reversed(careful[i]);
        //cout<<"newn "<<newn<<" "<<careful[i]<<endl;
        if(careful[i]==newn)
        {
            if(prime(careful[i])==1||careful[i]==2)
            {
                cout<<careful[i]*2<<endl;
                break;
            }
        }
        cout<<careful[i]*2<<endl;
    }
    return 0;
}
