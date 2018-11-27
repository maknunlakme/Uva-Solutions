#include<iostream>
using namespace std;
int main()
{
    int test,wall,height,temp,jump_up,jump_down,counter;
    cin>>test;
    counter = 0;
    while(test!=0)
    {
        jump_up = 0;
        jump_down = 0;
        cin>>wall;
        cin>>temp;
        while(wall!=1)
        {
            cin>>height;
            if(height>temp)
            {
                jump_up++;
            }
            else if(height<temp)
            {
                jump_down++;
            }
            temp = height;
            wall--;
        }
        counter++;
        cout<<"Case "<<counter<<": "<<jump_up<<" "<<jump_down<<endl;
        test--;
    }
    return 0;
}
