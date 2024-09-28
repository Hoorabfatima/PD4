 #include<iostream>
 using namespace std;
 void pet(int);
 main()
{
   int holidays;
   cout<<"Holidays: ";
   cin>>holidays;
   pet(holidays);
}
 void pet(int holidays)
{
   int gametime;
   int workingdays;
   int difference;
   int gametimeHour;
   int gametimeMinute;
   workingdays=365-holidays;
   gametime=(workingdays*63+holidays*127);
 if(gametime>30000)
{
   cout<<"Tom will run away."<<endl;
   gametimeHour=(gametime-30000)/60;
   gametimeMinute=gametimeHour/60;
   cout<<gametimeHour<<"hours and "<<gametimeMinute<<"minutes for play";
 }
 if(gametime<30000)
{
   cout<<"Tom sleeps well.";
   gametimeHour=(30000-gametime)/60;
   gametimeMinute=gametimeHour/60;
   cout<<gametimeHour<<" hours and "<<gametimeMinute<< "minutes less for play";
}
}
  
 