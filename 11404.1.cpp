#include<bits/stdc++.h>
using namespace std;
int lps[1010][1010],s[1010][1010];
void LPS(char str[])
{
    int n=strlen(str);
    int i,j,k;
    for(i=0; i<n; i++)
    {
        lps[i][i]=1;
    }
    for(k=2; k<=n; k++)
    {
        for(i=0; i<n; i++)
        {
            j=i+k-1;
            if((str[i]==str[j])&&(k==2))
            {
                lps[i][j]=2;
                s[i][j]=1;
            }
            else if(str[i]==str[j])
            {
                lps[i][j]=2+lps[i+1][j-1];
                s[i][j]=1;
            }
            else
            {
                lps[i][j]=max(lps[i][j-1],lps[i+1][j]);
                //s[i][j]=3;
            }
        }
    }
}
int main()
{
    int test,n;
    scanf("%d",&test);
    getchar();
    int i,j;
    char line[1100];
    while(test--)
    {
        gets(line);
        n=strlen(line);
        LPS(line);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<lps[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<lps[0][n-1]<<endl;
    }
    return 0;
}
