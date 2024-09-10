#include <iostream>
using namespace std;

class Array {
    int* arr;  // Pointer to the dynamically allocated array
    int size;  // Size of the array

public:
    // Constructor to initialize the array
    Array(int s) {
        size = s;
        arr = new int[size];  // Dynamically allocate memory for the array
    }

    // Destructor to free dynamically allocated memory
    ~Array() {
        delete[] arr;
    }

    // Overloading the [] operator to get/set elements
    int& operator[](int index) {
        // Check for index out of bounds
        if (index < 0 || index >= size) {
            cout << "Index out of bounds" << endl;
            exit(1);  // Exit the program with an error
        }
        return arr[index];  // Return a reference to allow modification
    }

    // Function to display array elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create an array of the specified size
    Array arr(size);

    // Set array elements using the overloaded [] operator
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Using the overloaded [] operator to set elements
    }

    // Display the array
    cout << "Array elements: ";
    arr.display();

    // Modify a specific element (using index 2 for this example)
    arr[2] = 100;

    // Display the modified array
    cout << "Modified array: ";
    arr.display();

    // Try accessing an out-of-bounds index to test the error handling
    // Uncomment this line to see the error handling in action
    // arr[size] = 200;  // This will cause an "Index out of bounds" error

    return 0;
}
