// Heap Dynamic Array: Size is known at runtime and allocated on the heap.

#include <iostream>

int main() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}