#include<iostream>
using namespace std;
int discountPrice(string name,int price);
int main()
{
  string name;
  float price,result;
  cout<<"Enter the country's name: ";
  cin>>name;
  cout<<"Enter the ticket price in dollers: ";
  cin>>price;
  result=discountPrice(name,price);
  cout<<"Price of ticket after discount: "<<result;
  
}
int discountPrice(string name,int price)
{ 
    float discount;
  
    if(name=="Pakistan"||name=="pakistan")
    {
       discount=price-price/100*5;
    }
    else if(name=="Ireland"||name=="ireland")
    {
       discount=price-price/100*10;
    }
    else if(name=="India"||name=="india")
    {
       discount=price-price/100*20;
    }
    else if(name=="England"||name=="england")
    {
       discount=price-price/100*30;
    }
    else if(name=="Canada"||name=="canada")
    {
       discount=price-price/100*45;
    }
    else
    {
      discount=price;
    }
    return discount;
}