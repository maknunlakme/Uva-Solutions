#include<iostream>
#include<cstdio>
#define INF 999999999
#define X 12
using namespace std;
int n;
int m[X][X];
int s[X][X];
void matrix_chain_order(int p[])
{
    int i,j,k,l,q;
    for(i=1; i<=n; i++)
    {
        m[i][i]=0;
    }
    for(l=2; l<=n; l++)
    {
        for(i=1; i<=n-l+1; i++)
        {
            j=i+l-1;
            m[i][j]=INF;
            for(k=i; k<=j-1; k++)
            {
                q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}

void print_optimal_parens(int i, int j)
{
    if(i==j)
    {
        printf("A%d",i);
    }
    else
    {
        printf("(");
        print_optimal_parens(i,s[i][j]);
        cout<<" x ";
        print_optimal_parens(s[i][j]+1,j);
        printf(")");
    }
}

int main()
{
    int p[12];
    int a,b,prev_b,i,j,case_counter=0;
    while(1)
    {
        cin>>n;
        case_counter++;
        j=0;
        if(n==0)
        {
            break;
        }
        cin>>a>>prev_b;
        p[0]=a;
        p[1]=prev_b;
        j+=2;
        for(i=1;i<n;i++)
        {
            cin>>a>>b;
            if(a==prev_b)
            {
                p[j]=b;
                prev_b=b;
                j++;
            }
        }
        matrix_chain_order(p);
        //cout<<m[1][n]<<endl;
        cout<<"Case "<<case_counter<<": ";
        print_optimal_parens(1,n);
        cout<<endl;
    }
    return 0;
}

