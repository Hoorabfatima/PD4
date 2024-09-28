 #include<iostream>
 #include<windows.h>
 using namespace std;
 void hCharacter();
 void aCharacter();
 void sCharacter();
 void nCharacter();
main()
{
   system("cls");
   hCharacter();
   cout<<endl;
   aCharacter();
   cout<<endl;
   sCharacter();
   cout<<endl;
   sCharacter();
   cout<<endl;
   aCharacter();
   cout<<endl;
   nCharacter();
}
void hCharacter()
{ 
  cout<<"##     ##   "<<endl;
  cout<<"##     ##   "<<endl;
  cout<<"##     ##   "<<endl;
  cout<<"#########   "<<endl;
  cout<<"#########   "<<endl;
  cout<<"##     ##   "<<endl;
  cout<<"##     ##   "<<endl;
  cout<<"##     ##   "<<endl;
}
void aCharacter()
{
  cout<<"   ####      "<<endl;
  cout<<"  ##  ##     "<<endl;
  cout<<" ##    ##    "<<endl;
  cout<<" ########    "<<endl;
  cout<<" ##    ##    "<<endl;
  cout<<" ##    ##    "<<endl;
  cout<<" ##    ##    "<<endl;
}
void sCharacter()
{
  cout<<"   #####     "<<endl;
  cout<<"  ##   ##    "<<endl;
  cout<<"   ##        "<<endl;
  cout<<"     ##      "<<endl;
  cout<<"       ##    "<<endl;
  cout<<"  ##   ##    "<<endl;
  cout<<"   #####     "<<endl;
}
void nCharacter()
{
   cout<<"  ##     ##   "<<endl;
   cout<<"  ####   ##   "<<endl;
   cout<<"  ## ### ##   "<<endl;
   cout<<"  ##  #####   "<<endl;
   cout<<"  ##   ####   "<<endl;
   cout<<"  ##    ###   "<<endl;
   cout<<"  ##     ##   "<<endl;
}