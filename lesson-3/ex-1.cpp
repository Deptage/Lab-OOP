#include <iostream>
#include <vector>
using namespace std;
class Character
{
    private:
    string name;
    string lastname;
    int age;
    bool is_a_fantastic_creature;
    public:
    Character(string a, string b, int c, bool d)
    {
        this->name=a;
        this->lastname=b;
        this->age=c;
        this->is_a_fantastic_creature=d;
    }
    Character();
    void AgeUp()
    {
        this->age++;
    }
    void MakeAFantasticCreature()
    {
        this->is_a_fantastic_creature=1;
    }
    void PrintCharacter()
    {
        cout<<name<<" "<<lastname<<endl;
    }
};
class Author
{
    private:
    string name;
    string lastname;
    string nationality;
    vector <string> languages;
    int age;
    public:
    Author(string a, string b, string c, int d)
    {
        this->name=a;
        this->lastname=b;
        this->nationality=c;
        this->age=d;
    }
    Author():name("aaaaa"),lastname("bbbbb"),nationality("ccccc"){}
    void AddLanguage(string lang)
    {
        this->languages.push_back(lang);
    }
    void AgeUp()
    {
        this->age++;
    }
};
class Title
{
    private:
    string title;
    string subtitle;
    public:
    Title(string a, string b)
    {
        this->title=a;
        this->subtitle=b;
    }
    Title():title("aaaa"),subtitle("bbbb"){}
    void ChangeTitle(string newtitle, string newsubtitle)
    {
        this->title=newtitle;
        this->subtitle=newsubtitle;
    }
};
class Book
{
    private:
    Author auth;
    Title tit;
    vector <Character> characters;
    int dateOfRelease;
    public:
    Book(Author &aut, Title &ti, vector <Character> &chs, int dof)
    {
        this->auth=aut;
        this->tit=ti;
        this->characters=chs;
        this->dateOfRelease=dof;
    }
    void PrintingCharacters()
    {
        for(int i = 0; i<characters.size();i++)
        {
            characters[i].PrintCharacter();
        }
    }
    void AddCharacter(Character &chara)
    {
        this->characters.push_back(chara);
    }
};
int main()
{

}
