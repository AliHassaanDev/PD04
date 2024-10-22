#include <iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
 int main()
 {
   int redRose,whiteRose,tulip;
   cout<<"Number of Red Roses: ";
   cin>>redRose;
   cout<<"Number of White Roses: ";
   cin>>whiteRose;
   cout<<"Number of Tulip: ";
   cin>>tulip;
   flowerShop(redRose,whiteRose,tulip);
 }
 void flowerShop(int redRose,int whiteRose,int tulip)
{
    float total;
    total=redRose*2.00+whiteRose*4.10+tulip*2.50;
    cout<<"Total price: "<<total<<endl;
    if(total>=200)
    {
        float discount;
       discount=total-total/100*20;
       cout<<"Price after discount: "<<discount;
    }
}