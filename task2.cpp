#include <iostream>
using namespace std;
void calculator(float length,float width,float height,string unit);
main()
{
    float length,width,height;
    float finalarea;
    string unit;
    cout<<"Enter length of the pyramid:";
    cin>>length;
    cout<<"Enter width of the pyramid:";
    cin>>width;
    cout<<"Enter height of the pyramid:";
    cin>>height;
    cout<<"Enter UNIT:";
    cin>>unit;
    calculator(length,width,height,unit);
    
}
 void calculator(float length,float width,float height,string unit)
{   
    float finalarea;
    float area=length*width*height/3;
    if (unit=="centimeters")
    {
        finalarea=(area)*1000000;
        cout <<finalarea<<" cubic centimeter";
    }
    if (unit=="milimeters")
    {
        finalarea=(area)*1000000000.000;
        cout<<finalarea<<" cubic milimeters";
    }
    if (unit=="kilometers")
    {
        finalarea=area / 1000000000.0;
        cout<<finalarea<<" cubic kilometers";
    }
   

}