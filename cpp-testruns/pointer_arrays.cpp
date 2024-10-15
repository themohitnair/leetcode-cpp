#include <iostream>
using namespace std;

int main(void) {
    int* p;
    p = new int[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> *(p + i);
    }

    cout << "Elements of the array are: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << endl;
    }
}