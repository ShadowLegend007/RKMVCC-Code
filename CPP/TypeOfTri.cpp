#include <iostream>
using namespace std;
class Triangle
{
private:
    int a,b,c;
public:
    void Sides();
    void Type();
};
void Triangle::Sides()
{
    cout << "Enter the length of the first side:-";
    cin >> a;
    cout << "Enter the length of the second side:-";
    cin >> b;
    cout << "Enter the length of the third side:-";
    cin >> c;
}
void Triangle::Type()
{
    if(a==b && b==c)
    {
        cout<<"This is a Equilateral Triangle"<<endl;
    }
    else if (a==b||b==c||a==c)
    {
        cout<<"This is a Isosceles Triangle"<<endl;
    }
    else
    {
        cout<<"This is a Scalene Triangle"<<endl;
    }
}
int main()
{
    Triangle t;
    t.Sides();
    t.Type();
}