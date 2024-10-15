#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int A[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &A[i]);
    }

    cout << "Elements in the array are: " <<endl;
    for(int x: A) {
        cout << x << " ";
    }

    return 0;
}