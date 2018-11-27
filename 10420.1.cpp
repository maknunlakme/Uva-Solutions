#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    string country[2100],total[2100],temp;
    int test,i,j,k,length;
    bool add;
    int names[2100] = {0};
    j = 0;
    cin>>test;
    for(i=0;i<test;i++)
    {
        fflush(stdin);
        getline(cin,country[i]);
    }
    for(i=0;i<test;i++)
    {
        while(country[i][0]==' ')
        {
            country[i].erase(0,1);
        }
        length = country[i].length();
        for(k=0;k<length;k++)
        {
            if((country[i][k]>='a'&&country[i][k]<='z')||(country[i][k]>='A'&&country[i][k]<='Z'))
            {
                while(country[i][k]!=32||country[i][k]!=13)
                {
                    k++;
                }
                country[i].erase(k,length-1);
                break;
            }
        }
    }
    total[j] = country[j];
    for(i=1;i<test;i++)
    {
        add = true;
        for(k=0;k<=j;k++)
        {
            if(total[k]==country[i])
            {
                add = false;
                break;
            }
        }
        if(add==true)
        {
            j++;
            total[j] = country[i];
        }
    }
    sort(total,total+j+1);
    for(k=0;k<=j;k++)
    {
        for(i=0;i<test;i++)
        {
            if(total[k]==country[i])
            {
                names[k]++;
            }

        }
    }
    for(i=0;i<=j;i++)
    {
        cout<<total[i]<<" "<<names[i]<<endl;
    }
    cout<<endl;
    return 0;
}
