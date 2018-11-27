#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int number,counter=0;
    bool doublebreak;
    double u,v,t,s,a;
    while(1)
    {
        scanf("%d",&number);
        counter++;
        switch(number)
        {
        case 0:
            doublebreak=true;
            break;
        case 1:
            scanf("%lf%lf%lf",&u,&v,&t);
            a=((v-u)/t);
            s=(u*t)+(u*t*t*0.5);
            printf("Case %d: %lf %lf\n",counter,s,a);
            cout<<u<<" "<<v<<" "<<t<<" "<<s<<" "<<a<<endl;
            break;
        case 2:
            scanf("%lf%lf%lf",&u,&v,&a);
            t=((v-u)/a);
            s=(u*t)+(u*t*t*0.5);
            printf("Case %d: %llf %llf\n",counter,s,t);
            cout<<u<<" "<<v<<" "<<t<<" "<<s<<" "<<a<<endl;
            break;
        case 3:
            scanf("%lf%lf%lf",&u,&a,&s);
            t=((v-u)/a);
            v=sqrt((u*u)+(2*a*s));
            printf("Case %d: %.3llf %.3llf\n",counter,v,t);
            cout<<u<<" "<<v<<" "<<t<<" "<<s<<" "<<a<<endl;
            break;
        case 4:
            scanf("%lf%lf%lf",&v,&a,&s);
            t=((v-u)/a);
            u=sqrt((v*v)-(2*a*s));
            printf("Case %d: %.3lf %.3lf\n",counter,u,t);
            cout<<u<<" "<<v<<" "<<t<<" "<<s<<" "<<a<<endl;
            break;
        }
        if(doublebreak==true)
        {
            break;
        }
    }
    return 0;
}
