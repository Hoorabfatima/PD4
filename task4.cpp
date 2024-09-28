 #include<iostream>
 using namespace std;
 void CheckSpeed(int);
 main()
{
   int speed;
   cout<<"Enter speed: ";
   cin>>speed;
   CheckSpeed(speed);
}
 void CheckSpeed(int speed)
{
  if(speed<=100)
   cout<<"Perfect!You're going good.";
  else
   cout<<"Halt...YOU WILL BE CHALLENGED!!!";
}