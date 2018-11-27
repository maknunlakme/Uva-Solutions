#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,maxiname,mininame;
    int dd,mm,yyyy,test,maxidd,maximm,maxiyyyy,minidd,minimm,miniyyyy;
    cin>>test;
    maxidd = 0;
    maximm = 0;
    maxiyyyy = 0;
    minidd = 10000;
    minimm = 10000;
    miniyyyy = 999999;
    while(test!=0)
    {
        cin>>name;
        cin>>dd;
        cin>>mm;
        cin>>yyyy;
        if(maxiyyyy<yyyy)
        {
            maxiyyyy = yyyy;
            maximm = mm;
            maxidd = dd;
            maxiname = name;
        }
        else if(maxiyyyy==yyyy)
        {
            if(maximm<mm)
            {
                maximm = mm;
                maxidd = dd;
                maxiname = name;
            }
            else if(maximm==mm)
            {
                if(maxidd<dd)
                {
                    maxidd = dd;
                    maxiname = name;
                }
            }
        }
        if(miniyyyy>yyyy)
        {
            miniyyyy = yyyy;
            minimm = mm;
            minidd = dd;
            mininame = name;
        }
        else if(miniyyyy==yyyy)
        {
            if(minimm>mm)
            {
                minimm = mm;
                minidd = dd;
                mininame = name;
            }
            else if(minimm==mm)
            {
                if(minidd>dd)
                {
                    minidd = dd;
                    mininame = name;
                }
            }
        }
        test--;
    }
    cout<<maxiname<<endl;
    cout<<mininame<<endl;
    return 0;
}

