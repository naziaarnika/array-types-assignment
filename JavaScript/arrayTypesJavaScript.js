// Fixed Stack Dynamic Array: Size is known at compile time and allocated on the stack.

const arr = [1, 2, 3, 4, 5];
for(let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}

// Stack Dynamic Array: Size is known at runtime and allocated on the stack.

const size = parseInt(prompt("Enter size:"));
const arr2 = new Array(size);
for(let i = 0; i < size; i++) {
    arr[i] = i + 1;
}
for(let i = 0; i < size; i++) {
    console.log(arr[i]);
}

// Fixed Heap Dynamic Array: Size is known at compile time and allocated on the heap.

const arr3 = new Array(5);
for(let i = 0; i < 5; i++) {
    arr[i] = i + 1;
}
for(let i = 0; i < 5; i++) {
    console.log(arr[i]);
}

// Heap Dynamic Array: Size is known at runtime and allocated on the heap.

const size2 = parseInt(prompt("Enter size:"));
const arr4 = [];
for(let i = 0; i < size; i++) {
    arr.push(i + 1);
}
for(let i = 0; i < size; i++) {
    console.log(arr[i]);
}