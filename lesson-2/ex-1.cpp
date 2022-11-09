#include <iostream>
#include <vector>
using namespace std;
class Air_Freshener
{
    int mode;
    double price;
    bool filterNeedsChange;
    Air_Freshener(int mode1=0, double price1=500, bool filterNeedsChange1=0)//default constructor
    {
        this->mode=mode1;
        this->price=price1;
        this->filterNeedsChange=filterNeedsChange1;
    }
    Air_Freshener(int a, double b)//your own values
    {
        this->mode=a;
        this->price=b;
        this->filterNeedsChange=0;
    }
    Air_Freshener(int a)//if you want to change the mode (to turn it off/on)
    {
        this->mode=a;
    }
};
class Room
{
    bool isTheAirFreshenerInTheRoom=0;
    vector<Air_Freshener> airfreshenersintheroom;
    Room(Air_Freshener object)
    {
        this->isTheAirFreshenerInTheRoom=1;
        airfreshenersintheroom.push_back(object);
    }
    Room()
    {
        this->airfreshenersintheroom.clear();
    }
};
int main()
{
    Air_Freshener af(1,500.99);
    Room r1;
    return 0;
}
