# Array Types Assignment (C++ and JavaScript)

This is my submission for the array categories assignment. I’ve used **C++** and **JavaScript** to demonstrate how different types of arrays are defined and managed in each language. The goal was to understand how memory allocation and array size determination vary depending on the language and the array category.

## Array Categories and Descriptions

### 1. Fixed Stack Dynamic
- In this type, the size of the array is defined during compile time, and it cannot be changed once the program runs.
- The array is stored in the stack memory, which is limited but faster in access.
- Example: `int arr[5];` in C++ or a fixed `const arr = [1,2,3]` in JavaScript.
- This is useful when we know the exact number of elements in advance and don't need to modify the size later.

### 2. Stack Dynamic
- The size of the array is decided at runtime, based on user input or other conditions.
- Still stored in the stack, often as local variables inside a function or block.
- In C++, this is usually done using VLA (Variable Length Arrays) supported in some compilers like GCC.
- In JavaScript, although arrays are always dynamic, I simulated this by creating arrays based on runtime values without using heap features.

### 3. Fixed Heap Dynamic
- Here, the array size is still fixed, but the memory is allocated on the heap.
- Heap memory is larger and used when stack space is insufficient or when we want arrays to live outside the function scope.
- In C++, I used `new` to allocate the array in heap and `delete[]` to free the memory.
- In JavaScript, most arrays live in the heap by default, so I just created an array with a fixed size and didn’t modify it.

### 4. Heap Dynamic
- This is the most flexible type where both allocation and resizing happen at runtime.
- Memory is allocated on the heap, and the array can grow or shrink as needed.
- In C++, I used `new` for allocation and allowed user input to decide the size and content.
- In JavaScript, I used the built-in dynamic array behavior where arrays grow using `.push()` or similar methods.

## C++ vs JavaScript – What I Learned

### C++
- In C++, memory management is very explicit. I had to decide where the array would live (stack or heap).
- For heap arrays, I used `new` and had to manually free memory using `delete[]` to prevent memory leaks.
- Fixed stack arrays are fast but limited in size. Heap arrays are better for large or dynamic datasets but need extra care for memory cleanup.
- C++ offers more control but also requires more attention to avoid errors like buffer overflows or memory leaks.

### JavaScript
- In JavaScript, arrays are always dynamic by default and live in the heap.
- There’s no concept of strict memory allocation like C++, which makes coding easier and safer but less predictable in terms of performance.
- Stack vs heap is not something we manage directly; the JavaScript engine handles memory in the background.
- I simulated the different array categories using how and when I created the arrays, like using `Array(size)` or using `push()` to grow the array.

### Final Thoughts
- This assignment helped me clearly understand the difference between static and dynamic arrays, as well as stack vs heap memory.
- It also showed me how two different languages treat memory and array management differently.
- C++ is better when you need control and performance, while JavaScript is more flexible and easier for general use.

This assignment will be uploaded to GitHub as part of my course submission.
