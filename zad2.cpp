#include <iostream>
#include <vector>
using namespace std;
class Sharpie
{
    public:
    int color;
    int id;
    double amountOfInk;
    Refill()
    {
        this->amountOfInk=10.0;
    }
    Use()
    {
        this->amountOfInk-=1.0;
    }
    Sharpie(int a, int b)
    {
        this->color=a;
        this->id=b;
    }
    Sharpie();
    GettingID()
    {
        return this->id;
    }
};
class PencilCase
{
    vector<Sharpie> content;
    PutSharpieIn(Sharpie sh1)
    {
        this->content.push_back(sh1);
    }
    RemovingASharpie(int it)
    {
        Sharpie Sh;
        Sh=content[content.size()-1];
        content.pop_back();
        return Sh;
    }
};
int main()
{
    return 0;
    PencilCase pc;
    Sharpie(1,0);
}
