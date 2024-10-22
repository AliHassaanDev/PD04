#include <iostream>
#include<Windows.h>
using namespace std;
void gotoxy(int x,int y);
void playerMove(int x,int y);
void maze();
int main()
{
    int x=4,y=4;
    system("cls");
    maze();
    gotoxy(x,y);
    playerMove(x,y);
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
void playerMove(int x,int y)
{
    while(true)
    {  
        gotoxy(x,y);
        cout<<"P";
        Sleep(100);
        gotoxy(x,y);
        cout<<" ";
        x=x+1;
        if(x==31)
        {
            x=1;
        }
    }
}