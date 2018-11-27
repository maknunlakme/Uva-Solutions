#include<iostream>
#define X 35000
#include<string>
using namespace std;
char temp[100];
long long int slength[X];
int main()
{
    int i,j,k,l,test,m,number,temp;
    string line;
    slength[1]=1;
    for(i=2;i<10;i++)
    {
        slength[i]=slength[i-1]+i;
    }
    for(i=10,j=1;i<100;i++,j++)
    {
        slength[i]=slength[i-1]+i+j;
    }
    for(i=100,j=91,k=1;i<1000;i++,j++,k++)
    {
        slength[i]=slength[i-1]+i+j+k;
    }
    for(i=1000,j=991,k=901,l=1;i<X;i++,j++,k++,l++)
    {
        slength[i]=slength[i-1]+i+j+k+l;
    }
    for(i=0;i<X;i++)
    {
        cout<<slength[i]<<" hey "<<i<<endl;
    }
    cin>>test;
    while(test--)
    {
        cin>>number;
        i=1;
        j=X;
        while(i<j)
        {
            //cout<<"working"<<endl;
            m=(i+j)/2;
            //cout<<slength[m]<<endl;
            if(number>slength[m])
            {
                i=m+1;
               // cout<<"hey "<<endl;
            }
            else
            {
                j=m;
              // cout<<"bye"<<endl;
            }
        }
       // cout<<"slength "<<slength[i]<<" "<<slength[i-1]<<" "<<i<<endl;
        number-=slength[i-1];
        line="1";
        for(i=2,j=1;i<=number+1;i++)
        {
            temp=i;
           // cout<<"temp "<<temp<<endl;
            string newline;
            for(j=0;temp>0;j++)
            {
                newline[j]=((temp%10)+'0');
                line.insert(line.end()-j,newline[j]);
               //cout<<"calculation "<<((temp%10)+'0')<<endl;
               //cout<<"newline "<<newline[j]<<" "<<j<<endl;
               // cout<<"line "<<line<<endl;
                temp/=10;
            }
            //cout<<"newline "<<newline<<endl;
        }
        //cout<<"number "<<number<<endl;
        //cout<<line<<endl;
        cout<<line[number-1]<<endl;
    }
    return 0;
}
