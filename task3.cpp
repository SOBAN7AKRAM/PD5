#include <iostream>
using namespace std;
float taxamount(char type,float price);
main ()
{
    float price;
    char type;
    cout <<"Enter price of the item:";
    cin>>price;
    cout<<"Enter type code of item:";
    cin>>type;
    float result=taxamount(type,price);
    cout<<"The final price on a vehical of type "<<type<<" After adding tax is "<<result;
}
float taxamount(char type,float price)
{
    float totalprice;
    if (type=='M')
    {
        totalprice=price+(price*6/100); 
    }
    if (type=='E')
    {
        totalprice=price+(price*8/100);
    }
    if (type=='S')
    {
        totalprice=price+(price*10/100);
    }
    if (type=='V')
    {
        totalprice=price+(price*12/100);
    }
    if (type=='T')
    {
        totalprice=price+(price*15/100);
    }
     return totalprice;

}