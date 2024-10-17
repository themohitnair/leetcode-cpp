#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area(Rectangle r) {
    return r.length * r.breadth;
}

void lengthen(Rectangle* r) {
    r->length *= 2;
}

int main(void) {
    Rectangle r = {10, 5};
    lengthen(&r);
    cout << "Area of the lengthened rectangle is: " << area(r) << endl;

    return 0;
}