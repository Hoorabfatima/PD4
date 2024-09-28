 #include<iostream>
 using namespace std;
 void tile(int,int);
 main()
{
   int a,b;
   cout<<"Enter your position: ";
   cin>>a;
   cout<<"Enter your friend's position: ";
   cin>>b;
   tile(a,b);
}
 void tile(int a,int b)
{
   int c;
   c=b-a;
  if(c>6)
   cout<<"False";
  else
   cout<<"True";
}
