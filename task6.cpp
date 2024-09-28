 #include<iostream>
 using namespace std;
 void longer(int hours,int minutes);
 main()
{
  int hours;
  int minutes;
  cout<<"Enter the number of hours: ";
  cin>>hours;
  cout<<"Enter the number of minutes: ";
  cin>>minutes;
  longer(hours,minutes);
}
 void longer(int hours, int minutes)
{
  int h;
  h=hours*60;
 if(h>minutes)
   cout<<hours;
 if(h<minutes)
   cout<<minutes;
 if(h==minutes)
   cout<<"Equal";
}
