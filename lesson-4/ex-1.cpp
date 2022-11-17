#include <iostream>
using namespace std;
class Properties
{
    public:
    virtual string tellTheTaste()=0;
    virtual string tellTheSmell()=0;
    virtual double tellTheSize()=0;
    virtual double tellThePrice()=0;
};
class Bread: public Properties
{
private:
    double sizeOfBread;
    string taste;
    string smell;
    double price;
public:
    Bread(double size1,string taste1, string smell1, double pri)
    {
        this->sizeOfBread=size1;
        this->taste=taste1;
        this->smell=smell1;
        this->price=pri;
    }
    string tellTheTaste()
    {
        return taste;
    }
    string tellTheSmell()
    {
        return smell;
    }
    double tellTheSize()
    {
        return sizeOfBread;
    }
    double tellThePrice()
    {
        return price;
    }
    Bread newPrice(double increase)
    {
        return Bread(this->sizeOfBread, this->taste, this->smell, this->price+increase);
    }
    Bread Enlarge(double increase)
    {
        return Bread(this->sizeOfBread+increase, this->taste, this->smell, this->price);
    }

};
int main()
{
    Bread smallbread(200.0,"good","bready",5.0);
}
