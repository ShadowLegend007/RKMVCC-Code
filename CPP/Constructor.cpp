#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double getArea() const {
        return length * width;
    }
    void display() const {
        cout << "Length: " << length;
        cout << "Width: " << width;
    }
};

int main() {
    double length, width;

    Rectangle rect1;
    cout << "Rectangle 1 (Default Constructor):";
    rect1.display();
    cout << "Area: " << rect1.getArea();

    cout << endl;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Rectangle rect2(length, width);
    cout << "Rectangle 2 (Parameterized Constructor):";
    rect2.display();
    cout << "Area: " << rect2.getArea();

    return 0;
}
