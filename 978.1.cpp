#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

vector<int>aa,bb;
multiset<int,greater<int> >arr,brr;
multiset<int,greater<int> >::iterator ita,itb;
int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,n,a,b,i,loop,temp,t=0;
    cin>>test;
    while(test--)
    {
        if(t!=0) cout<<endl;
        t++;
        cin>>n>>a>>b;
        arr.clear();
        brr.clear();
        for(i=0; i<a; i++)
        {
            cin>>temp;
            arr.insert(temp);
        }
        for(i=0; i<b; i++)
        {
            cin>>temp;
            brr.insert(temp);
        }
        while(!arr.empty() and !brr.empty())
        {
            aa.clear();
            bb.clear();
            loop=min(n,min((int)arr.size(),(int)brr.size()));
            ita=arr.begin();
            itb=brr.begin();
            for(i=0;i<loop;i++)
            {
                aa.push_back(*ita);
                bb.push_back(*itb);
                arr.erase(ita++);
                brr.erase(itb++);
            }
            for(i=0; i<loop; i++)
            {
                if(aa[i]>bb[i])
                {
                    aa[i]-=bb[i];
                    bb[i]=0;
                }
                else if(bb[i]>aa[i])
                {
                    bb[i]-=aa[i];
                    aa[i]=0;
                }
                else
                {
                    aa[i]=0;
                    bb[i]=0;
                }
            }
            for(i=0;i<aa.size();i++)
            {
                if(aa[i]!=0)
                {
                    arr.insert(aa[i]);
                }
            }
            for(i=0;i<bb.size();i++)
            {
                if(bb[i]!=0)
                {
                    brr.insert(bb[i]);
                }
            }
        }
        if(arr.empty() and brr.empty())
        {
            cout<<"green and blue died"<<endl;
        }
        else if(arr.empty())
        {
            cout<<"blue wins"<<endl;
            for(itb=brr.begin();itb!=brr.end();itb++)
            {
                cout<<(*itb)<<endl;
            }
        }
        else
        {
            cout<<"green wins"<<endl;
            for(ita=arr.begin();ita!=arr.end();ita++)
            {
                cout<<(*ita)<<endl;
            }
        }
    }
    return 0;
}
