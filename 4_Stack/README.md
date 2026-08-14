# Stack

> Exploring the Stack data structure and its fundamental operations using C and C++.

A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle. The element inserted last is the first element to be removed.

This section contains a practical implementation of a Stack using an array and dynamic memory allocation.

---

## 📂 Implementation

### `stack_using_c.c`

This program implements a Stack using a custom `Stack` structure.

The stack stores its elements in a dynamically allocated array and maintains the position of the top element using a `top` variable.

### Supported Operations

| Operation | Description                                 | Complexity |
| --------- | ------------------------------------------- | ---------: |
| `Push`    | Adds an element to the top                  |     `O(1)` |
| `Pop`     | Removes the top element                     |     `O(1)` |
| `Peek`    | Returns the top element without removing it |     `O(1)` |
| `View`    | Displays the stack elements                 |     `O(n)` |
| `isEmpty` | Checks whether the stack is empty           |     `O(1)` |
| `isFull`  | Checks whether the stack is full            |     `O(1)` |

---

## 🔄 How Stack Works

```text
        ┌───────┐
        │   50  │  ← TOP
        ├───────┤
        │   40  │
        ├───────┤
        │   30  │
        ├───────┤
        │   20  │
        ├───────┤
        │   10  │
        └───────┘
```

If `50` is pushed last, it will be the first element to be popped.

```text
Push → 10 → 20 → 30 → 40 → 50

Pop  → 50
Pop  → 40
Pop  → 30
```

---

## ⚠️ Stack Conditions

### Stack Overflow

Occurs when an element is pushed into a stack that has already reached its maximum capacity.

```text
Stack is Full
     ↓
   PUSH
     ↓
Overflow!
```

### Stack Underflow

Occurs when a `pop` operation is attempted on an empty stack.

```text
Stack is Empty
     ↓
    POP
     ↓
Underflow!
```

The implementation handles both conditions using `isFull()` and `isEmpty()` checks.

---

## 🧠 Concepts Covered

* Stack Data Structure
* LIFO Principle
* Array-based Stack
* Structures in C
* Pointers
* Dynamic Memory Allocation
* `malloc()`
* `free()`
* Stack Overflow
* Stack Underflow
* Function-based implementation

---

## ⚖️ Stack Operation Comparison

| Operation | Access       | Modification |   Time |
| --------- | ------------ | ------------ | -----: |
| Push      | Top          | Insert       | `O(1)` |
| Pop       | Top          | Delete       | `O(1)` |
| Peek      | Top          | None         | `O(1)` |
| View      | All elements | None         | `O(n)` |

The main advantage of a Stack is that insertion and deletion from the top can be performed in **constant time**.

---

## 💾 Space Complexity

For a stack with capacity `n`:

**Space Complexity: `O(n)`**

The implementation dynamically allocates memory according to the stack capacity.

---

## 🛠️ Memory Management

The C implementation uses dynamic memory allocation:

```text
Create Stack
     ↓
Allocate Stack Structure
     ↓
Allocate Array
     ↓
Perform Stack Operations
     ↓
Free Array
     ↓
Free Stack
```

The `clean()` function releases the dynamically allocated memory when the program terminates.

---

## 💻 Language

* **C** — Implemented
* **C++** — Placeholder for future implementation

---

## 🎯 Learning Objective

This implementation is intended to build a practical understanding of:

* How a Stack works internally
* The LIFO principle
* Stack operations and their complexities
* Overflow and underflow conditions
* Implementing data structures using structures and pointers
* Managing dynamically allocated memory

---

## 🚀 Future Updates

More Stack implementations and related problems will be added as I continue learning Data Structures and Algorithms.

A **C++ implementation** and other Stack-based applications may also be added in future updates.

---

**Author:** Ashraful Islam
