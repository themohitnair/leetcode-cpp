#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int& a, int&b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(void) {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping by value: " << a << " " <<  b << endl;
    swapByValue(a, b);
    cout << "After swapping by value: " << a << " " <<  b << endl;

    cout << "Before swapping by address: " << a << " " <<  b << endl;
    swapByAddress(&a, &b);
    cout << "After swapping by address: " << a << " " <<  b << endl;

    cout << "Before swapping by reference: " << a << " " <<  b << endl;
    swapByReference(a, b);
    cout << "After swapping by reference: " << a << " " <<  b << endl;
}