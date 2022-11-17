#include <iostream>
#include <string>
#include <vector>
using namespace std;
class BreadProperties
{
    public:
    virtual string tellTheTaste()=0;
    virtual string tellTheSmell()=0;
    virtual double tellTheSize()=0;
    virtual double tellThePrice()=0;
    virtual void printTheProperties()=0;
};
class Bread: public BreadProperties
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
    Bread():sizeOfBread(500.0),taste("normal"),smell("normal"),price(5.0){}
    string tellTheTaste()
    {
        return this->taste;
    }
    string tellTheSmell()
    {
        return this->smell;
    }
    double tellTheSize()
    {
        return this->sizeOfBread;
    }
    double tellThePrice()
    {
        return this->price;
    }
    void printTheProperties()
    {
        cout<<"size: "<<this->tellTheSize()<<endl;
        cout<<"taste: "<<this->tellTheTaste()<<endl;
        cout<<"smell: "<<this->tellTheSmell()<<endl;
        cout<<"price: "<<this->tellThePrice()<<endl;
    }
    Bread newPrice(double increase)
    {
        return Bread(this->sizeOfBread, this->taste, this->smell, this->price+increase);
    }
    Bread Enlarge(double increase)
    {
        return Bread(this->sizeOfBread+increase, this->taste, this->smell, this->price);
    }
    Bread reduceTheSize(double decrease)
    {
        return Bread(this->sizeOfBread-decrease, this->taste, this->smell, this->price);
    }

};
int main()
{
    Bread small_bread(200.0,"good","bready",5.0);
    Bread brioche_bun(60,"sweet","milky",0.99);
    Bread baguette(240,"crunchy","bready",6.99);

    Bread even_smaller_bread=small_bread.reduceTheSize(30);
    Bread pricier_brioche_bun=brioche_bun.newPrice(0.30);
    Bread bigger_baguette=baguette.Enlarge(20);

    cout<<endl<<"small bread: "<<endl;
    small_bread.printTheProperties();
    cout<<endl<<"brioche bun: "<<endl;
    brioche_bun.printTheProperties();
    cout<<endl<<"baguette: "<<endl;
    baguette.printTheProperties();
    cout<<endl<<"even smaller bread: "<<endl;
    even_smaller_bread.printTheProperties();
    cout<<endl<<"pricier brioche bun: "<<endl;
    pricier_brioche_bun.printTheProperties();
    cout<<endl<<"bigger baguette: "<<endl;
    bigger_baguette.printTheProperties();
}
