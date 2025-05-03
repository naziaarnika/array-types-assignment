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
