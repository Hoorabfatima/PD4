 #include<iostream>
 using namespace std;
 void equal(int,int);
 main()
{
  int num1,num2;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;
  equal(num1,num2);
}
 void equal(int num1, int num2)
{
  if(num1==num2)
  cout<<"True";
  else
  cout<<"False";
}
