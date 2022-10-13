#include <iostream>
#include <vector>
using namespace std;
class Mother
{
    public:
    string name;
    string lastname;
    int age;
    int yearOfBirth;
};
class Father
{
    public:
    string name;
    string lastname;
    int age;
    int yearOfBirth;
};
class Child
{
    public:
    string name;
    string lastname;
    int age;
    int yearOfBirth;
    Mother mother;
    Father father;
    Child(string n, string ln, int a, int yob, Mother m, Father f)
    {
        this->name=n;
        this->lastname=ln;
        this->age=a;
        this->yearOfBirth=yob;
        this->mother=m;
        this->father=f;
    }
    void Who_are_your_parents()
    {
        cout<<mother.name<<endl;
        cout<<father.name<<endl;
    }
};
class School
{
public:
    string name;
    vector<Child> students;
    void Assign_to_A_school(Child ch1)
    {
        students.push_back(ch1);
    }
};
int main()
{
    string name, surname; int age, yob;
    cout<<"You will create a family. Let's start with the mother"<<endl;
    Mother mother1;
    cout<<"Input mother's first name:"<<endl;
    cin>>name;
    cout<<"Input mother's lastname:"<<endl;
    cin>>surname;
    cout<<"Input mother's age:"<<endl;
    cin>>age;
    cout<<"Input mother's year of birth:"<<endl;
    cin>>yob;
    mother1.name=name;
    mother1.lastname=surname;
    mother1.age=age;
    mother1.yearOfBirth=yob;
    cout<<"Now I will generate the rest of the family myself ;\)"<<endl;
    Father father1;
    father1.name="Krzychu";
    father1.lastname="Nowak";
    father1.age=34;
    father1.yearOfBirth=1980;
    Child child1("Julka","Nowak",17,2001,mother1,father1);
    cout<<"Here are child's parents"<<endl;
    child1.Who_are_your_parents();
    cout<<"I will assign the child to the school now"<<endl;
    School sch1;
    sch1.name="SP77Poznan";
    sch1.Assign_to_A_school(child1);
    cout<<"Names of the students:"<<endl;
    cout<<sch1.students[0].name<<endl;
    return 0;
}
