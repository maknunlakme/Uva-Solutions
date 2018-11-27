#include<iostream>
#include<map>
using namespace std;

map<string,int>word;
string code;
int i,j,k,l,m,counter=1;
char arr[10];
int main()
{
    for(i=0; i<26; i++)
    {
        arr[0]='a'+i;
        string letter(arr);
        word[letter]=counter;
        //cout<<letter<<" "<<arr<<" "<<counter<<endl;
        counter++;
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            arr[0]='a'+i;
            arr[1]='a'+j;
            string letter(arr);
            word[letter]=counter;
            //cout<<letter<<" "<<arr<<" "<<counter<<endl;
            counter++;
        }
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            for(k=j+1; k<26; k++)
            {
                arr[0]='a'+i;
                arr[1]='a'+j;
                arr[2]='a'+k;
                string letter(arr);
                word[letter]=counter;
                counter++;
                //cout<<letter<<" "<<arr<<" "<<counter<<endl;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            for(k=j+1; k<26; k++)
            {
                for(l=k+1; l<26; l++)
                {
                    arr[0]='a'+i;
                    arr[1]='a'+j;
                    arr[2]='a'+k;
                    arr[3]='a'+l;
                    string letter(arr);
                    word[letter]=counter;
                    counter++;
                    //cout<<letter<<" "<<arr<<" "<<counter<<endl;
                }
            }
        }
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            for(k=j+1; k<26; k++)
            {
                for(l=k+1; l<26; l++)
                {
                    for(m=l+1; m<26; m++)
                    {
                        arr[0]='a'+i;
                        arr[1]='a'+j;
                        arr[2]='a'+k;
                        arr[3]='a'+l;
                        arr[4]='a'+m;
                        string letter(arr);
                        word[letter]=counter;
                        counter++;
                        //cout<<letter<<" "<<arr<<" "<<counter<<endl;
                    }
                }
            }
        }
    }
    while(cin>>code)
    {
        if(!word[code])
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<word[code]<<endl;
        }
    }
    return 0;
}
