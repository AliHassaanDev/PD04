#include<iostream>
using namespace std;
void longestTime(int hours,int minuter);
int main()
{ 
  int hours,minutes;
  cout<<"Enter number of hours: ";
  cin>>hours;
  cout<<"Enter number of minutes: ";
  cin>>minutes;
  longestTime(hours,minutes);
}
void longestTime(int hours,int minutes)
{
    if(hours*60> minutes)
    {
        cout<<hours;
    }
    else
    {
    cout<<minutes;
    }
}