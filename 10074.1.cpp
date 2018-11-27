
#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int N,M;
int A[110][110];

int main() {
    scanf("%d%d", &N,&M);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
            if(A[i][j]==0)
            {
                A[i][j]=1;
            }
            else if(A[i][j]==1)
            {
                A[i][j]=0;
            }
            if(i > 0) A[i][j] += A[i - 1][j];
            if(j > 0) A[i][j] += A[i][j - 1];
            if(i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            for(int k = i; k < N; k++) {
                for(int l = j; l < M; l++) {
                    int cur = A[k][l];
                    if(i > 0) cur -= A[i - 1][l];
                    if(j > 0) cur -= A[k][j - 1];
                    if(i > 0 && j > 0) cur += A[i - 1][j - 1];
                    ans = max(ans, cur);
                    cout<<"ans : "<<ans<<" "<<cur<<" "<<k<<" "<<l<<endl;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}

