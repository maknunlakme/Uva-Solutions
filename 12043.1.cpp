
#include<iostream>
#define X 100000
using namespace std;
long long int dive[X+10],sum[X+10];
void divesum()
{
   long long int i,j;
   for(i=1;i<=X;i++)
   {
       for(j=i;j<=X;j+=i)
       {
           dive[j]++;
           sum[j]+=i;
       }
   }
}

long long int g(long long int a,long long int b,long long int c)
{
   long long int i,total=0;
   for(i=a;i<=b;i++)
   {
       if(i%c==0)
       {
           total+=dive[i];
       }
   }
   return total;
}

long long int h(long long int a,long long int b,long long int c)
{
   long long int i,total=0;
   for(i=a;i<=b;i++)
   {
       if(i%c==0)
       {
           total+=sum[i];
       }
   }
   return total;
}

int main()
{
   divesum();
   long long int test,i,a,b,c;
   cin>>test;
   while(test--)
   {
       cin>>a>>b>>c;
       cout<<g(a,b,c)<<" "<<h(a,b,c)<<endl;
   }
   return 0;
}
