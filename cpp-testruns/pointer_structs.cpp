#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(void) {
    Rectangle* r;

    r->breadth = 5;
    r->length = 4;

    cout << "Area of the rectangle is " << r->length * r->breadth << endl;

    return 0;
}