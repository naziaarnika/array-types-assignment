// Fixed Heap Dynamic Array: Size is known at compile time and allocated on the heap.

#include <iostream>

int main() {
    int* arr = new int[5]{1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}