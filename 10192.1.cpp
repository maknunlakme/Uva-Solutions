#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int c[300][300];
int lcs_length(string line1,string line2)
{
    int m=line1.length();
    int n=line2.length();
    int i,j;
    for(i=0; i<=m; i++)
    {

        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
            {
                c[i][j] = 0;
            }
            else if (line1[i-1] == line2[j-1])
            {
                c[i][j] = c[i-1][j-1] + 1;
            }
            else
            {
                c[i][j] = max(c[i-1][j], c[i][j-1]);
            }
        }
    }
    return c[m][n];
}

int main()
{
    string line1,line2;
    int counter=0;
    while(1)
    {
        getline(cin,line1);
        if(line1[0]=='#')
        {
            break;
        }
        getline(cin,line2);
        counter++;
        cout<<"Case #"<<counter<<": you can visit at most "<<lcs_length(line1,line2)<<" cities."<<endl;
        line1.clear();
        line2.clear();
    }
    return 0;
}
