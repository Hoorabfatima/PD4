#include<iostream>
using namespace std;
void tpChecker(int,int);
main()
{
int people,tissueroll,days;
cout<<"Number of people in household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tissueroll;
tpChecker(people,tissueroll);
}
void tpChecker(int people,int tissueroll)
{
 int days;
 days=500/(57*people);
 if(days<14)
 cout<<" Your TP will last only "<<days<<" days ,buy more!!!";
 if(days>=14)
 cout<<"Your TP will last "<<days<<" days, no need to panic!";
} 