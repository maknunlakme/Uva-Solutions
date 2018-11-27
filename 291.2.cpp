#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

vector<int>mat[10],arr;
int n=8;
void rec(int id)
{
    int i,length,a;
    if(id==n)
    {
        for(i=0; i<n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
    else
    {
        a=arr[id-1];
        length=mat[a].size();
        cerr<<"length "<<length<<" "<<id-1<<" "<<arr[id-1]<<endl;
        for(i=0; i<length; i++)
        {
            a=mat[a][i];
            arr.push_back(a);
            cerr<<id<<" "<<a<<endl;
            rec(id+1);
            arr.pop_back();
        }
    }
}

int main()
{
    mat[1].push_back(2);
    mat[1].push_back(3);
    mat[1].push_back(5);
    mat[2].push_back(1);
    mat[2].push_back(3);
    mat[2].push_back(5);
    mat[3].push_back(1);
    mat[3].push_back(2);
    mat[3].push_back(4);
    mat[3].push_back(5);
    mat[4].push_back(3);
    mat[4].push_back(5);
    mat[5].push_back(1);
    mat[5].push_back(2);
    mat[5].push_back(3);
    mat[5].push_back(4);
    arr.push_back(1);
    rec(1);
    return 0;
}
