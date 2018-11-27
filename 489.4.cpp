#include<iostream>
#include<string>
using namespace std;
int main()
{
    string puzzle,answer;
    int round;
    while(1)
    {
        cin>>round;
        if(round==-1)
        {
            break;
        }
        cin>>puzzle>>answer;
        cout<<"Round "<<round<<endl;
        int puzzlelength=puzzle.length();
        int answerlength=answer.length();
        for(int i=0;i<puzzlelength;i++)
        {
            for(int j=i+1;j<puzzlelength;j++)
            {
                if(puzzle[i]==puzzle[j])
                {
                    puzzle.erase(j,1);
                    i--;
                    j--;
                    puzzlelength--;
                }
            }
        }
        for(int i=0;i<answerlength;i++)
        {
            for(int j=i+1;j<answerlength;j++)
            {
                if(answer[i]==answer[j])
                {
                    answer.erase(j,1);
                    i--;
                    j--;
                    answerlength--;
                }
            }
        }
        int similar=0;
        int strokes=0;
        bool found;
        for(int i=0;i<answerlength;i++)
        {
            found = false;
            for(int j=0;j<puzzlelength;j++)
            {
                if(puzzle[j]==answer[i])
                {
                    similar++;
                    found = true;
                    break;
                }
            }
            if(similar==puzzlelength)
            {
                cout<<"You win."<<endl;
                break;
            }
            if(found==false)
            {
                strokes++;
                if(strokes==7)
                {
                    cout<<"You lose."<<endl;
                    break;
                }
            }
        }
        if(strokes<7&&similar<puzzlelength)
        {
            cout<<"You chickened out."<<endl;
        }
    }
}
