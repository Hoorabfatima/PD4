 #include<iostream>
 using namespace std;
 void reverse(string);
 main()
{
  string value;
  cout<<"Enter True or False : ";
  cin>>value;
  reverse(value);
}
 void reverse(string value)
{
  if(value=="True"||value=="true")
  cout<<"False";
  else if(value=="false"||value=="False")
  cout<<"True";
  else
  cout<<"Invalid Input";
}
