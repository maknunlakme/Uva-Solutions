#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<climits>
#include<sstream>
using namespace std;

string line,word;
int arr[30];
int counter,C;
bool func()
{
    int i,j;
   for(i=0;i<counter;i++)
   {
       for(j=i+1;j<counter;j++)
       {
           if(((C/arr[i])%counter)==((C/arr[j])%counter))
           {
               C=min(((C/arr[i])+1)*arr[i],((C/arr[j])+1)*arr[j]);
               return 0;
           }
       }
   }
   return 1;
}

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int i,j,length;
    while(getline(cin,line))
    {
        memset(arr,0,sizeof arr);
        length=line.size();
        C=INT_MAX;
        //cerr<<"AA "<<line<<endl;
        counter=0;
        stringstream blah(line);
        while(blah>>word)
        {
            i=0;
            while(i<word.size())
            {
                arr[counter]=(arr[counter]<<5) + (word[i]-'a'+1);
                i++;
            }
            //cerr<<"AA "<<i<<" "<<counter<<" "<<arr[counter]<<endl;
            counter++;
        }
        for(i=0;i<counter;i++)
        {
            C=min(C,arr[i]);
        }
        while(func()==false);
        cout<<line<<endl<<C<<endl<<endl;
    }
    return 0;
}
