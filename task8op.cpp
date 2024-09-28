 #include<iostream>
 using namespace std;
 void printMenu();
 void calculateAggregate();
 void compareMarks();
main()
{ 
  string choice;
  system("cls");
  printMenu();
  cout<<endl;
  cout<<"AGGREGATE CALCULATION"<<endl<<endl;
  cout<<"DO YOU WANT TO CALCULATE AGGREGATE (YES OR NO): ";
  cin>>choice;
  if(choice=="yes")
  calculateAggregate(); 
  cout<<endl<<endl;
  cout<<"DETERMINING ROLL NUMBERS"<<endl<<endl;
  compareMarks();
  
}
 void printMenu()
{
   system("color 04");
   cout<<"     ##    ##   ##    ##   ###  ##       ##  #####     #####     ####   ###   #####   ##    ##              ###     ####      ###      ###  ###   ###   ###   ###   ###   ##    ##        "<<endl;
   cout<<"     ##    ##   ###   ##    #    ##     ##    #       ##   ##   ##  ##   #      #      ##  ##              ## ##    ##  ##     ###    ###    #   ##  # ##  #   #   ## ##   ###  #         "<<endl;
   cout<<"     ##    ##   ####  ##    #     ##   ##     #       ##  ##     ##      #      #       ####               ## ##    ##   ##    ## ## # ##    #   ##    ##      #   ## ##   ## ###         "<<endl;
   cout<<"     ##    ##   ## ## ##    #      ## ##      ###     ####        ###    #      #        ##                #####    ##   ##    ##  ### ##    #    ##    ##     #   ## ##   ## ###         "<<endl; 
   cout<<"      ##  ##    ##  ####    #       ###       #       ## ##     #   ##   #      #        ##                ## ##    ##  ##     ##   #  ##    #      ##    ##   #   ## ##   ##  ##         "<<endl;
   cout<<"       ####     ##    ##   ###       #       #####    ##  ##     ####   ###     #        ##                ## ##    ####       ##      ##   ###   ###   ###   ###   ###    ##  ##         "<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"                ###    ###   ###     ##   ##    ###     ####    ####  ###    ###  ####  ##   ## ######             ###   ##   ##   ###   ######  #####   ###    ###                       "<<endl;
   cout<<"                 ###  ###   ## ##    ###  ##   ## ##   ##   #   ##     ###  ###   ##    ###  ##   ##              ##  #   ## ##   ##  #    ##    ##       ###  ###                        "<<endl;
   cout<<"                 ## ## ##  ##   ##   #### ##  ##   ##  ##       ##     ## ## ##   ##    #### ##   ##              ##       ###    ##       ##    ##       ## ## ##                        "<<endl;
   cout<<"                 ## ## ##  #######   ## ####  #######  ##  ###  ####   ## ## ##   ####  ## ####   ##               ###      #      ###     ##    ####     ## ## ##                        "<<endl;
   cout<<"                 ##    ##  ##   ##   ##  ###  ##   ##  ##    #  ##     ##    ##   ##    ##  ###   ##              #  ##     #        ##    ##    ##       ##    ##                        "<<endl;
   cout<<"                 ##    ##  ##   ##   ##   ##  ##   ##   #####   ####   ##    ##   ####  ##   ##   ##               ###      #     ####     ##    #####    ##    ##                        "<<endl;
}
void calculateAggregate()
{
 system("color 01");
 string name;
 float matricMarks;
 float interMarks; 
 float ecatMarks;
 float aggregate;
   cout<<"Enter your name: ";
   cin>>name;
   cout<<"Enter your matric marks (out of 1100): ";
   cin>>matricMarks;
   cout<<"Enter your intermediate marks (out of 550): ";
   cin>>interMarks;
   cout<<"Enter your Ecat marks (out of 400): ";
   cin>>ecatMarks;
 aggregate=(matricMarks/1100*100*0.3)+(interMarks/550*100*0.3)+(ecatMarks/400*100*0.4);
   cout<<"Your aggregate is: "<<aggregate<<"%";
}
void compareMarks()
{
   system("color 02");
   string student1,student2;
   float ecatMarksStd1,ecatMarksStd2;
   cout<<"Enter student 1 name: ";
   cin>>student1;
   cout<<"Enter student 2 name: ";
   cin>>student2;
   cout<<"Enter student 1 ecat marks: ";
   cin>>ecatMarksStd1;
   cout<<"Enter student 2 ecat marks: ";
   cin>>ecatMarksStd2;
   if(ecatMarksStd1>ecatMarksStd2)
    cout<<student1<<" roll number should be first.";
   if(ecatMarksStd1<ecatMarksStd2)
    cout<<student2<<" roll number should be first.";
}