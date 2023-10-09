#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
void printEnemy();
void eraseEnemy();
void moveEnemy();
void printMaze();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();

int eX = 1, eY = 1;
int pX = 26, pY = 20;
int eX1 = 30, eY1 = 1;
int eX2 =1, eY2 = 5;
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
main()
{
    system("cls");
    printMaze();
    printEnemy();
    printEnemy1();
    printEnemy2();
   
    while(true)
    {
    	if(GetAsyncKeyState(VK_LEFT))
	{
	    movePlayerLeft();
	}
	
    	if(GetAsyncKeyState(VK_RIGHT))
	{
	      movePlayerRight();
	}
        moveEnemy();
        Sleep(200);
        moveEnemy1();
        Sleep(200);
	moveEnemy2();
        Sleep(200);
      
    }
}

void printEnemy()
{
	gotoxy(eX,eY);
	cout<< "(~~~)  (~~~)";
        gotoxy(eX,eY+1);
	cout<< "|=| |  | |=|";
   	gotoxy(eX,eY+2);
	cout<< "|=| |  | |=|";
	gotoxy(eX,eY+3);
        cout<< "   \\    /   ";
	gotoxy(eX,eY+4);
	cout<< "    \\  /    ";
}
void eraseEnemy()
{
	gotoxy(eX,eY);
	cout<< "             ";
        gotoxy(eX,eY+1);
	cout<< "             ";
   	gotoxy(eX,eY+2);
	cout<< "             ";
	gotoxy(eX,eY+3);
        cout<< "             ";
	gotoxy(eX,eY+4);
	cout<< "             ";
}
void moveEnemy()
{
        eraseEnemy();
	eX = eX + 1;
        if(eX == 20)
	{
	   eX = 1;
	}
	printEnemy();
}
void printEnemy1()
{
	gotoxy(eX1,eY1);
	cout<< "       |||       ";
        gotoxy(eX1,eY1+1);
	cout<< "     |.|.|.|     ";
   	gotoxy(eX1,eY1+2);
	cout<< "    |~|~|~|~|    ";
	gotoxy(eX1,eY1+3);
        cout<< "   |-|-|-|-|-|   ";
	gotoxy(eX1,eY1+4);
	cout<< " [-------------] ";
}
void eraseEnemy1()
{
	gotoxy(eX1,eY1);
	cout<< "                 ";
        gotoxy(eX,eY1+1);
	cout<< "                 ";
   	gotoxy(eX1,eY1+2);
	cout<< "                 ";
	gotoxy(eX1,eY1+3);
        cout<< "                 ";
	gotoxy(eX1,eY1+4);
	cout<< "                 ";
}
void moveEnemy1()
{
        eraseEnemy1();
	eY1 = eY1 + 1;
        if(eY1 == 12)
	{
	   eY1 = 1;
	}
	printEnemy1();
}
void printEnemy2()
{
	gotoxy(eX2,eY2);
	cout<<   "      [||]       ";
        gotoxy(eX2,eY2+1);
	cout<<   "   [||||||||]    ";
   	gotoxy(eX2,eY2+2);
	cout<<   "[|~|~|~|~|~|~|]  ";
	gotoxy(eX2,eY2+3);
        cout<<   "   [||||||||]    ";
	gotoxy(eX2,eY2+4);
	cout<<   "      [||]       ";
}	
void eraseEnemy2()
{
	gotoxy(eX2,eY2);
	cout<< "                 ";
        gotoxy(eX2,eY2+1);
	cout<< "                 ";
   	gotoxy(eX2,eY2+2);
	cout<< "                 ";
	gotoxy(eX2,eY2+3);
        cout<< "                 ";
	gotoxy(eX2,eY2+4);
	cout<< "                 ";
}
void moveEnemy2()
{
        eraseEnemy2();
	eY2 = eY2 + 1;  
        if(eY2 == 15)
	{
	   eY2 = 5;
	}
	eX2 =eX2 + 1; 
        if(eX2 == 12)
        {
	  eX2 = 1;
	}
	printEnemy2();
}
void printMaze()
{
	cout<< "#######################################################" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#						      #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#                                                     #" <<endl;
	cout<< "#######################################################" <<endl;
}
void printPlayer()
{
	gotoxy(pX,pY);
	cout<< "     /\\       ";
	gotoxy(pX,pY+1);
	cout<< " __/~~~~\\__   ";
	gotoxy(pX,pY+2);
	cout<< "/  |    |   \\ ";
  	gotoxy(pX,pY+3);
  	cout<< "=====.  .===== ";
	gotoxy(pX,pY+4);
	cout<< "     ||||      ";
}
void movePlayerLeft()
{
	if(getCharAtxy(pX - 1, pY) == ' ')
   	{
   	erasePlayer();
	pX = pX - 1;
       	printPlayer();
	}
}
void movePlayerRight()
{
	if(getCharAtxy(pX + 15, pY) == ' ')
	{
	erasePlayer();
	pX = pX + 1;
	printPlayer();
	}
}

void erasePlayer()
{
	gotoxy(pX,pY);
	cout<< "               ";
	gotoxy(pX,pY+1);
	cout<< "               ";
	gotoxy(pX,pY+2);
	cout<< "               ";
  	gotoxy(pX,pY+3);
  	cout<< "               ";
	gotoxy(pX,pY+4);
	cout<< "               ";
}
void gotoxy(int x, int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


