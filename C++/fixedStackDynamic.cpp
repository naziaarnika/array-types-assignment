// Fixed Stack Dynamic Array: Size is known at compile time and allocated on the stack.

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}