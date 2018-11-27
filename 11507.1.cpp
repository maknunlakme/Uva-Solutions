#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string, map<string, string> > bends;
    bends["+x"]["+y"] = "+y";
    bends["+x"]["-y"] = "-y";
    bends["+x"]["+z"] = "+z";
    bends["+x"]["-z"] = "-z";
    bends["-x"]["+y"] = "-y";
    bends["-x"]["-y"] = "+y";
    bends["-x"]["+z"] = "-z";
    bends["-x"]["-z"] = "+z";
    bends["+y"]["+y"] = "-x";
    bends["+y"]["-y"] = "+x";
    bends["+y"]["+z"] = "+y";
    bends["+y"]["-z"] = "+y";
    bends["-y"]["+y"] = "+x";
    bends["-y"]["-y"] = "-x";
    bends["-y"]["+z"] = "-y";
    bends["-y"]["-z"] = "-y";
    bends["+z"]["+y"] = "+z";
    bends["+z"]["-y"] = "+z";
    bends["+z"]["+z"] = "-x";
    bends["+z"]["-z"] = "+x";
    bends["-z"]["+y"] = "-z";
    bends["-z"]["-y"] = "-z";
    bends["-z"]["+z"] = "+x";
    bends["-z"]["-z"] = "-x";
    int length,i,j,loop;
    string point,temp;
    while(1)
    {
        cin>>length;
        if(length==0)
        {
            break;
        }
        loop=length-1;
        point="+x";
        while(loop--)
        {
           cin>>temp;
           if(temp!="No")
           {
               point=bends[point][temp];
           }
        }
        cout<<point<<endl;
    }
}
