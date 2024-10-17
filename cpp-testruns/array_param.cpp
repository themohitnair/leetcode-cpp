#include <iostream>
using namespace std;

void printArray(int* A, int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int* initArray(int size) {
    int* p = new int[size];

    for (int i = 0; i < size; i++) {
        *(p + i) = 0;
    }

    return p;
}

int main() {
    int size, *p;
    cout << "Enter the size of the array: ";
    cin >> size;

    p = initArray(size);
    
    printArray(p, size);
}