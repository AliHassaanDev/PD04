#include<iostream>
using namespace std;
void position(int myPos,int hisPos);
int main()
{ 
  int myPos,hisPos;
  cout<<"Enter your position: ";
  cin>>myPos;
  cout<<"Enter your friend's position: ";
  cin>>hisPos;
  position(myPos,hisPos);
}
void position(int myPos,int hisPos)
{
    if(hisPos-myPos<=6)
    {
      cout<<"True.";
    }
    else
    {
      cout<<"False";
    }
}