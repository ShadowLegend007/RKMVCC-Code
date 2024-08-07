#include <iostream>
using namespace std;
class Person
{
private:
    string name,country;
    int age;
public:
    void member();
    void display();
};
void Person::member()
{
    cout << "Write your name :-";
    cin >> name;
    cout << "Write your age:-";
    cin >> age;
    cout << "Write your country :-";
    cin >> country;
}
void Person::display()
{
    cout <<"Your give details are------\nName:-"<<name<<"\nAge:-"<<age<<"\nCountry:-"<<country<<endl;
}
int main()
{
    Person p;
    p.member();
    p.display();
}