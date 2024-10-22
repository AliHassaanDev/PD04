#include<iostream>
#include<Windows.h>
using namespace std;

void gotoxy(int x,int y);

int main()
{
   gotoxy(50,15);
   cout<<"  ###   ##      ##"<<endl;
   gotoxy(50,16);
   cout<<" ## ##  ##      ##"<<endl;
   gotoxy(50,17);
   cout<<"####### ##      ##"<<endl;
   gotoxy(50,18);
   cout<<"##   ## ##   ## ##"<<endl;
   gotoxy(50,19);
   cout<<"##   ## ####### ##"<<endl;
   gotoxy(0,30);
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}