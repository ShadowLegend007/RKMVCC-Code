#include <iostream>
using namespace std;

#define pi 3.14

class circle
{
private:
    float r, area, circum;

public:
    void Area();    
    void Circum();  
};

void circle::Area()
{
    cout << "Enter the radius: ";
    cin >> r;
    area = pi * r * r;
    cout << "The area is " << area << endl;
}

void circle::Circum()
{
    cout << "Enter the radius: ";
    cin >> r;
    circum = 2 * pi * r;
    cout << "The circumference is " << circum << endl;
}

int main()
{
    circle c;
    c.Area();
    c.Circum();
    return 0;
}
