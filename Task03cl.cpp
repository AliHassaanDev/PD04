#include <iostream>
#include<Windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
int main()
{
    system("cls");
    maze();
    gotoxy(4,4);
    cout<<"P";
    gotoxy(0, 15);
}
void maze()
{
  cout<<"################################"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"#                              #"<<endl;
  cout<<"################################"<<endl;
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}