#include <iostream>
using namespace std;
void pet(int holidays);
int main()
{
    int holidays;
    cout<<"Number of holidays: ";
    cin>>holidays;
    pet(holidays);
}
void pet(int holidays)
{
    int workDays,gameTime,sleepTime,sleepHours,sleepMinutes;
    workDays=365-holidays;
    gameTime=holidays*127+workDays*63;
    
    if(gameTime<30000)
    {
        sleepTime=30000-gameTime;
        sleepHours=sleepTime/60;
        sleepMinutes=sleepTime%60;
        cout<<"Tom sleeps well"<<endl;
        cout<<sleepHours<<" hours and "<<sleepMinutes<<" less for play";
    }
    else
    { 
        sleepTime=gameTime-30000;
        sleepHours=sleepTime/60;
        sleepMinutes=sleepTime%60;
        cout<<"Tom will run away"<<endl;
        cout<<sleepHours<<" hours and "<<sleepMinutes<<" for play";
    }
}