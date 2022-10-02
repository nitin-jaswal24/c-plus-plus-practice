
#include <iostream>
using namespace std;
class shop // using arrays in classes
{
int itemId[10];
int itemPrice[10];
int counter;
public:
void initCounter(void){ counter=0;}
void setPrice(void);
//void getPrice();
void displayPrice(void);

};
void shop::setPrice(void){
    cout<<"enter the id of the item"<<endl;
    cin>>itemId[counter];
    cout<<"enter the price of the item"<<endl;
    cin>>itemPrice[counter];
    counter++;}
void shop::displayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}
