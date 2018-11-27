#include<iostream>
using namespace std;
int main()
{
    int tea,temp,counter,i;
    while(cin>>tea)
    {
        counter=0;
        for(i=0;i<5;i++)
        {
            cin>>temp;
            if(temp==tea)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
