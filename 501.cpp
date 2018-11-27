#include<iostream>
#include<set>
#define X 30010
using namespace std;

int arr[X],brr[X];
multiset<int>mark;
multiset<int>::iterator it;

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    ios::sync_with_stdio(false);
    int test,n,m,i,j,k,counter,value;
    cin>>test;
    while(test--)
    {
        mark.clear();
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>brr[i];
        }
        counter=1;
        mark.insert(arr[0]);
        it=mark.begin();
        j=0;
        for(i=1; i<n; i++)
        {
            while(i==brr[j] and j<m)
            {
                if(j!=0)
                {
                    it++;
                    counter++;
                }
                cout<<(*it)<<endl;
                j++;
            }
            mark.insert(arr[i]);
            if(arr[i]<(*it))
            {
                --it;
                //cerr<<"AAA "<<(*it)<<endl;
            }
            //cout<<"QQQQQ "<<(*it)<<endl;
        }
        while(i==brr[j] and j<m)
        {
            if(j!=0)
            {
                it++;
                counter++;
            }
            cout<<(*it)<<endl;
            j++;
        }
        if(test!=0)
            cout<<endl;
    }
    return 0;
}
