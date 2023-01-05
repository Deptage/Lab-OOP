#include <iostream>
using namespace std;
class Game{//interface
public:
    virtual string result()=0;
};
class FakeFootballGame: public Game//fake class
{
private:
    string matchResult="2137";
public:
    string result(){
        return matchResult;
    }
};
int main() {
    FakeFootballGame fg;
    if(fg.result()=="2137")
        cout<<"Good"<<endl;
    else cout<<"Bad"<<endl;
    return 0;
}
