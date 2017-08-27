//OBJECT PASSING AS ARGUEMENTS TO FUNCTION
#include<iostream.h>
#include<conio.h>
class time
{
 private:
   float hours;int minutes;
 public:
   void gettime(void)
   {
    cout<<"Enter hours"<<endl;
    cin>>hours;
    cout<<"\nEnter minutes"<<endl;
    cin>>minutes;
   }
   void puttime(void)
   {
    cout<<hours<<"hours and"<<minutes<<"minutes"<<endl;
   }
   void sum(time,time);
};

void time::sum(time t1,time t2)
{
 minutes=t1.minutes+t2.minutes;
 hours=minutes/60;
 minutes=minutes%60;
 hours=hours+t1.hours+t2.hours;
}
void main()
{
 clrscr();
 time t1,t2,t3;
 t1.gettime();
 t2.gettime();
 t3.sum(t1,t2);
 cout<<"T1 =";
 t1.puttime();
 cout<<"T2 =";
 t2.puttime();
 cout<<"T3 =";
 t3.puttime();
 getch();
}