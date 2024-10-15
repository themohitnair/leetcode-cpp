#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a, b;
    cout << "Enter the first number a: ";
    cin >> a;
    cout << "Enter the second number b: ";
    cin >> b;

    cout << "a and b before swapping: " << a << " " << b << endl;

    swap(&a, &b);

    cout << "a and b before swapping: " << a << " " << b << endl;
    
    return 0;
}