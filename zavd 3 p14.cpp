#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)  {     
     COORD coord;
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  } 

int main()
{
gotoxy(0,0);
cout<<"+----------------------------------------+";
gotoxy(0,1);     
cout<<"!       KOLOR       !      Nr koloru     !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY); 
gotoxy(0,2);
cout<<"+----------------------------------------+";
gotoxy(0,3);
cout<<"!Czarny             !               0    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1 | FOREGROUND_INTENSITY); 
gotoxy(0,4);
cout<<"+----------------------------------------+";
gotoxy(0,5);
cout<<"!Niebieski          !               1    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2 | FOREGROUND_INTENSITY); 
gotoxy(0,6);
cout<<"+----------------------------------------+";
gotoxy(0,7);
cout<<"!Zielony            !               2    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3 | FOREGROUND_INTENSITY); 
gotoxy(0,8); 
cout<<"+----------------------------------------+";
gotoxy(0,9);
cout<<"!Morski             !               3    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4 | FOREGROUND_INTENSITY); 
gotoxy(0,10);
cout<<"+----------------------------------------+";
gotoxy(0,11);
cout<<"!Czerwony           !               4    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5 | FOREGROUND_INTENSITY); 
gotoxy(0,12);
cout<<"+----------------------------------------+";
gotoxy(0,13);
cout<<"!Fioletowy          !               5    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6 | FOREGROUND_INTENSITY); 
gotoxy(0,14);
cout<<"+----------------------------------------+";
gotoxy(0,15);
cout<<"!Zloty              !               6    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 | FOREGROUND_INTENSITY); 
gotoxy(0,16); 
cout<<"+----------------------------------------+";
gotoxy(0,17);
cout<<"!Bialy              !               7    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8 | FOREGROUND_INTENSITY); 
gotoxy(0,18);
cout<<"+----------------------------------------+";
gotoxy(0,19);
cout<<"!Szary              !               8    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9 | FOREGROUND_INTENSITY); 
gotoxy(0,20);
cout<<"+----------------------------------------+";
gotoxy(0,21);
cout<<"!Jasnoniebieski     !               9    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10 | FOREGROUND_INTENSITY); 
gotoxy(0,22);
cout<<"+----------------------------------------+";
gotoxy(0,23);
cout<<"!Jasnozielony       !              10    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11 | FOREGROUND_INTENSITY); 
gotoxy(0,24);
cout<<"+----------------------------------------+";
gotoxy(0,25);
cout<<"!Jasno morski       !              11    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 | FOREGROUND_INTENSITY); 
gotoxy(0,26);
cout<<"+----------------------------------------+";
gotoxy(0,27);
cout<<"!Jasno czerwony     !              12    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13 | FOREGROUND_INTENSITY); 
gotoxy(0,28);
cout<<"+----------------------------------------+";
gotoxy(0,29);
cout<<"!Jasno fioletowy    !              13    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14 | FOREGROUND_INTENSITY); 
gotoxy(0,30);
cout<<"+----------------------------------------+";
gotoxy(0,31);
cout<<"!Jasno zolty        !              14    !";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
gotoxy(0,32);
cout<<"+----------------------------------------+";
gotoxy(0,33);
cout<<"!Bialy              !              15    !";
gotoxy(0,34);
cout<<"+----------------------------------------+";    
system("pause");     
}
