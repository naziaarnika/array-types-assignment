// Fixed Stack Dynamic Array: Size is known at compile time and allocated on the stack.

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}


// Stack Dynamic Array: Size is known at runtime and allocated on the stack.

#include <iostream>

int main() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    int arr[size]; // Variable Length Array (VLA)
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}

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
