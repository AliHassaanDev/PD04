#include <iostream>
using namespace std;
void tpChecker(int people,int rolls);
int main()
{
  int people,rolls;
  cout<<"Number of people in household: ";
  cin>>people;
  cout<<"Number of rolls of tp: ";
  cin>>rolls;
  tpChecker(people,rolls);
}
void tpChecker(int people,int rolls)
{ 
    int days;
    days=(rolls*500)/(people*57);
    if(days<=14)
    {
        cout<<"Your tp will last "<<days<<" days, buy more!";
    }
    else
    {
       cout<<"Your tp will last "<<days<<" days, no need to panic!"; 
    }
}
