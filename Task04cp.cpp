#include<iostream>
using namespace std;
void checkSpeed(int speed);
int main()
{ 
  int speed;
  cout<<"Enter speed: ";
  cin>>speed;
  checkSpeed(speed);
}
void checkSpeed(int speed)
{
    if(speed<=100)
    {
      cout<<"Perfect! You're going good.";
    }
    else
    {
      cout<<"Halt...YOU WILL BE CHALLENGED!!!";
    }
}