#include <iostream>
using namespace std;

template<class T>
class Arithmetic {
    T a, b;
public:
    Arithmetic(T a, T b) {
        this->a = a;
        this->b = b;
    }

    T sum() {
        return this->a + this->b;
    }

    T diff() {
        return this->a - this->b;
    }

    T prod() {
        return this->a * this->b;
    }

    T quo() {
        if (this->b != 0) {
            return this->a / this->b;
        } else {
            return 0;
        }
    }
};

int main() {
    Arithmetic<int> a(5, 10);

    cout << "Sum: " << a.sum() << endl;
    cout << "difference: " << a.diff() << endl;
    cout << "Product: " << a.prod() << endl;
    cout << "Quotient: " << a.quo() << endl;


}