#include <iostream>
using namespace std;

typedef struct {
    int length;
    int breadth;
} Rectangle;

int main() {
    Rectangle r1;

    cout << "Enter the length of the rectangle: ";
    cin >> r1.length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> r1.breadth;

    cout << "The area of the rectangle is: " << r1.breadth * r1.length << endl;

    return 0;
}