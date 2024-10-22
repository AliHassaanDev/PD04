#include<iostream>
using namespace std;
void negation(string status);
int main()
{ 
  string status;
  cout<<"Enter True or False: ";
  cin>>status;
  negation(status);
}
void negation(string status)
{
    if(status=="False")
    {
      cout<<"True.";
    }
    else
    {
      cout<<"False";
    }
}