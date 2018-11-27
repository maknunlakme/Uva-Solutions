#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line,temp;
    int i,length,start,ends,counter;
    while(getline(cin,line))
    {
        length=line.length();
        counter=0;
        for(i=0; i<length; i++)
        {
            if((line[i]>='A'&&line[i]<='Z')||(line[i]>='a'&&line[i]<='z'))
            {
                counter++;
            }
            else if(counter>0)
            {
                //cout<<"counter "<<counter<<endl;
                if(line[i-counter]=='A'||line[i-counter]=='E'||line[i-counter]=='I'||line[i-counter]=='O'||line[i-counter]=='U'||line[i-counter]=='a'||line[i-counter]=='e'||line[i-counter]=='i'||line[i-counter]=='o'||line[i-counter]=='u')
                {
                    line.insert(i,"ay");
                    i+=2;
                    length+=2;
                }
                else
                {
                    temp=line[i-counter];
                    line.erase(i-counter,1);
                    line.insert(i-1,temp);
                    line.insert(i,"ay");
                    i+=2;
                    length+=2;
                }
                counter=0;
            }
        }
        if(counter>0)
        {
            if(line[i-counter]=='A'||line[i-counter]=='E'||line[i-counter]=='I'||line[i-counter]=='O'||line[i-counter]=='U'||line[i-counter]=='a'||line[i-counter]=='e'||line[i-counter]=='i'||line[i-counter]=='o'||line[i-counter]=='u')
            {
                line.insert(i,"ay");
                i+=2;
                length+=2;
            }
            else
            {
                temp=line[i-counter];
                line.erase(i-counter,1);
                line.insert(i-1,temp);
                line.insert(i,"ay");
                i+=2;
                length+=2;
            }
            counter=0;
        }
        cout<<line<<endl;

    }
    return 0;
}
