#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 100, 20, 30};

    int largest = -1;
    int second_largest = -1;

    // Print the array elements
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find the largest element
    for (int i = 0; i < 4; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest: " << largest << endl;

    // Find the second-largest element
    for (int i = 0; i < 4; i++) {
        if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    // Print the second-largest element
    if (second_largest != -1) {
        cout << "Second Largest: " << second_largest << endl;
    } else {
        cout << "No second-largest element found." << endl;
    }

    return 0;
}
