#include <iostream>
using namespace std;
class Game{//interface
public:
    virtual string result()=0;
};
class FakeFootballGame: public Game//fake class
{
private:
    string matchResult="2:1";
public:
    string result(){
        return matchResult;
    }
};
int main() {
    FakeFootballGame fg;
    if(fg.result()=="2:1")
        cout<<"Good"<<endl;
    else
    {
        cout<<"Incorrect score"<<endl;
        return 1;
    }
    return 0;
}
