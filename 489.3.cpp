#include<iostream>
#include<string>
using namespace std;
int main()
{
    int round, puzzle_length, answer_length,strokes,similar,i,j;
    string puzzle, answer;
    bool found;
    while(1)
    {
        cin>>round;
        if(round==-1)
        {
            break;
        }
        strokes = 0;
        similar = 0;
        cin>>puzzle;
        cin>>answer;
        puzzle_length = puzzle.length();
        answer_length = answer.length();
        for(i=0;i<answer_length;i++)
        {
            for(j=i+1;j<answer_length;j++)
            {
                if(answer[i]==answer[j])
                {
                    answer.erase(j,1);
                    i--;
                    j--;
                    answer_length--;
                }
            }
        }
        for(i=0;i<puzzle_length;i++)
        {
            for(j=i+1;j<puzzle_length;j++)
            {
                if(puzzle[i]==puzzle[j])
                {
                    puzzle.erase(j,1);
                    i--;
                    j--;
                    puzzle_length--;
                }
            }
        }
        for(i=0;i<answer_length;i++)
        {
            found = false;
            for(j=0;j<puzzle_length;j++)
            {
                //cout<<"puzzle "<<j<<" "<<puzzle[j]<<endl;
               // cout<<"answer "<<i<<" "<<answer[i]<<endl;
                if(puzzle[j]==answer[i])
                {
                    //answer[j]='0';
                    similar++;
                    //cout<<"similar :"<<similar<<" i "<<i<<" j "<<j<<endl;
                    found = true;
                    break;
                }
            }
            if(found==false)
            {
                strokes++;
                //cout<<"strokes :"<<strokes<<" i "<<i<<" j "<<j<<endl;
            }
            if(similar==puzzle_length)
            {
                break;
            }
        }
        cout<<"Round "<<round<<endl;
        if(similar==puzzle_length&&strokes<7)
        {
            cout<<"You win."<<endl;
        }
        else if(similar<answer_length&&strokes>6)
        {
            cout<<"You lose."<<endl;
        }
        else if(similar<answer_length&&strokes<7)
        {
            cout<<"You chickened out."<<endl;
        }
    }
    return 0;
}
