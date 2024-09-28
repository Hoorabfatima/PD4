 #include<iostream>
 #include<windows.h>
 using namespace std;
 void gotoxy(int x, int y);
main()
{
   system("cls");
   int x=60;
   int y=20;
 gotoxy(x,y);
   cout<<"   ###      ###        ##       ##      #####    ###      #####      "<<endl;
 y=y+1;
   cout<<"    #        #       ##  ##   ##  ##    #   #   ## ##     #    #     "<<endl;
 gotoxy(x,y);
 y=y+1;
   cout<<"    #        #       ##  ##   ##  ##    #  #    ## ##     #   #      "<<endl;
 gotoxy(x,y);
 y=y+1;
   cout<<"    ##########       ##  ##   ##  ##    ###     #####     ####       "<<endl;
 gotoxy(x,y);
 y=y+1;
   cout<<"    #        #       ##  ##   ##  ##    #  #    ## ##     #   #      "<<endl;
 gotoxy(x,y);
 y=y+1;
   cout<<"    #        #       ##  ##   ##  ##    #   #   ## ##     #    #     "<<endl;
 gotoxy(x,y);
 y=y+1;
   cout<<"   ###      ###        ##       ##     ###   #  ## ##     ######     "<<endl;
}
 void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
 