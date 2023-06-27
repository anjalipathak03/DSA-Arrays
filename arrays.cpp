
#include <iostream>

using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[] = {5, 2, 9, 1, 7};

    // Accessing elements of an array
    cout << "Elements of the array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modifying elements of an array
    numbers[2] = 12;

    // Printing modified array
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Size of an array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Size of the array: " << size << endl;

    return 0;
}
