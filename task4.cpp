#include <iostream>
using namespace std;
void calculation(int hours,int days,int workers);
main()
{
    int hours,days,worker;
    cout<<"Enter hours needed for project:";
    cin>>hours;
    cout<<"Enter days that firm has:";
    cin>>days;
    cout<<"Enter the number of worker:";
    cin>>worker;
    calculation(hours,days,worker);
}
void calculation(int hours,int days,int workers)
{
    int hours1=(9*days*workers);
    if (hours1>=hours)
    {
        int hoursleft=hours1-hours;
        cout<<"Yes! "<<hoursleft<<" hours left"<<endl;     
    }
    if (hours1<=hours)
    {
        int hoursneeded=hours-hours1;
        cout<<"Not enough time! "<<hoursneeded<<" hours needed"<<endl;
    }

}    