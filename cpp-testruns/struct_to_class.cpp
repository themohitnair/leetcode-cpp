#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
    public:
    Rectangle(int length, int breadth)  {
        this->breadth = breadth;
        this->length = length;
    }

    void lengthen() {
        this->length *= 2;
    }

    int area() {
        return this->length * this->breadth;
    }
};

int main(void) {
    Rectangle* r = new Rectangle(5, 10);

    r->lengthen();
    cout << "Area: " << r->area() << std::endl;

    delete r;

    return 0;
}