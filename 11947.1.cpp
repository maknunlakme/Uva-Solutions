#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string zodaic[12];
    int begin_date[12],end_date[12],test,date,month,year,day,total,newdate,newmonth,newyear;
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    zodaic[0]="aquarius";
    zodaic[1]="pisces";
    zodaic[2]="aries";
    zodaic[3]="taurus";
    zodaic[4]="gemini";
    zodaic[5]="cancer";
    zodaic[6]="leo";
    zodaic[7]="virgo";
    zodaic[8]="libra";
    zodaic[9]="scorpio";
    zodaic[10]="sagittarius";
    zodaic[11]="capricorn";
    begin_date[0]=21;
    begin_date[1]=20;
    begin_date[2]=21;
    begin_date[3]=21;
    begin_date[4]=22;
    begin_date[5]=22;
    begin_date[6]=23;
    begin_date[7]=22;
    begin_date[8]=24;
    begin_date[9]=24;
    begin_date[10]=23;
    begin_date[11]=23;
    end_date[0]=19;
    end_date[1]=20;
    end_date[2]=20;
    end_date[3]=21;
    end_date[4]=21;
    end_date[5]=22;
    end_date[6]=21;
    end_date[7]=23;
    end_date[8]=23;
    end_date[9]=22;
    end_date[10]=22;
    end_date[11]=20;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>month>>date>>year;
        total=months[month-1]-date;
        if(year%4==0&&month==2)
        {
            total+=1;
        }
        for(j=month%12;j<8;j++)
        {
            if(year%4==0&&j==1)
            {
                total+=1;
            }
            total+=months[j%12];
        }
        while(totol<280)
        {

        }
    }
    return 0;
}
