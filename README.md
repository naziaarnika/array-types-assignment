# Array Types Assignment

This repository contains examples of four types of arrays implemented in both C++ and JavaScript:

1. **Fixed Stack Dynamic**
2. **Stack Dynamic**
3. **Fixed Heap Dynamic**
4. **Heap Dynamic**

## Definitions

- **Fixed Stack Dynamic**: Size is known at compile time; memory is allocated on the stack.
- **Stack Dynamic**: Size is determined at runtime; memory is allocated on the stack.
- **Fixed Heap Dynamic**: Size is known at compile time; memory is allocated on the heap.
- **Heap Dynamic**: Size is determined at runtime; memory is allocated on the heap.

## Comparison Between C++ and JavaScript

| Feature              | C++                                     | JavaScript                             |
|----------------------|-----------------------------------------|----------------------------------------|
| Compile-time size    | `int arr[5];`                           | `const arr = [1, 2, 3, 4, 5];`         |
| Runtime size         | `int size; cin >> size; int arr[size];` | `const size = prompt(); const arr = new Array(size);` |
| Heap allocation      | `new int[size];`                        | `const arr = [];`                      |
| Memory management    | Manual (`delete[] arr;`)                | Automatic (Garbage Collected)          |

## Files

- `cpp/`: Contains C++ implementations.
- `js/`: Contains JavaScript implementations.

## Notes

- C++ requires explicit memory management when using heap allocation.
- JavaScript handles memory allocation and garbage collection automatically.


