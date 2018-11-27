 #include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test,counter,length,i,j,k,l;
    char line[210];
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        char output[210];
        cin>>line;
        k = 0;
        l = 0;
        length = strlen(line);
        for(i=0;i<length;i+2)
        {
            while(line[i+1]>48&&line[i+1]<58)
            {
                l = (l*10)+(line[i+1] - 48);
                cout<<"l :"<<l<<endl;
                i++;
            }
            cout<<"l "<<l<<endl;
            for(j=0;j<l;j++,k++)
            {
                output[k] = line[i];
            }
        }
        output[k] = '\0';
        counter++;
        cout<<"Case "<<counter<<": "<<output<<endl;
        test--;
    }
    return 0;
}
