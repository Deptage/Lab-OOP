#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Elf
{
private:
    int sumOfCalories;
public:
    Elf(int value)
    {
        this->sumOfCalories=value;
    }
    Elf addCalories(int value)
    {
        Elf newElf(this->sumOfCalories+value);
        return newElf;
    }
    int result()
    {
        return sumOfCalories;
    }
};
int main() {
    string input;
    vector<Elf> calories;
    Elf firstElf(0);
    while(cin)
    {
        getline(cin,input);
        if(input=="-1")
        {
            int max=-1;
            for(int i = 0; i<calories.size();i++)
            {
                int temp2=calories[i].result();
                if(temp2>max) max=temp2;
            }
            cout<<max<<endl;
            return 0;
        }
        else if(input=="")
        {
            calories.push_back(firstElf);
            Elf newElf(0);
            firstElf=newElf;
        }
        else
        {
            int input2=stoi(input);
            Elf newElf=firstElf.addCalories(input2);
            firstElf=newElf;
        }
    }
    return 0;
}
//a
