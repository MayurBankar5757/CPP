#include <iostream>
using namespace std;

class Array {
    int* arr;      // Pointer to the array (dynamic allocation)
    int size;      // Size of the array

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

    // Function to input array elements
    void input() {
        cout << "Enter " << size << " elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to display the array
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Overload the '!' operator to reverse the array elements
    void operator!() {
        int start = 0;
        int end = size - 1;

        // Swap the elements starting from both ends of the array
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
};

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create an array of the specified size
    Array arr(size);

    // Input elements into the array
    arr.input();

    // Display the original array
    cout << "Original Array: ";
    arr.display();

    // Use the overloaded ! operator to reverse the array
    !arr;

    // Display the reversed array
    cout << "Reversed Array: ";
    arr.display();

    return 0;
}
