# Queue

> Exploring the Queue data structure and its fundamental operations using C and C++.

A **Queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. The element that enters the queue first is the first element to be removed.

This section contains implementations of a **linear queue using dynamically allocated arrays**, written in both C and C++.

---

## 📂 Implementations

### `queue.c`

A C implementation of a linear queue using a `Queue` structure and dynamically allocated memory.

The queue maintains:

* `front` — points to the first available element
* `rear` — points to the last inserted element
* `cap` — stores the queue capacity
* `arr` — dynamically allocated array

### `queue_using_c++.cpp`

A C++ implementation of the same queue concept using a structure and dynamic memory allocation.

The implementation uses:

* `new` for memory allocation
* `delete[]` for memory deallocation
* `front` and `rear` for queue management

---

## 🔧 Operations

| Operation | Description                       | Time Complexity |
| --------- | --------------------------------- | --------------: |
| `Enqueue` | Adds an element at the rear       |          `O(1)` |
| `Dequeue` | Removes an element from the front |          `O(1)` |
| `View`    | Displays all current elements     |          `O(n)` |
| `isEmpty` | Checks whether the queue is empty |          `O(1)` |
| `isFull`  | Checks whether the queue is full  |          `O(1)` |

---

## 🔄 How Queue Works

```text
        FRONT                         REAR
          ↓                             ↓
       ┌────┬────┬────┬────┬────┐
Queue: │ 10 │ 20 │ 30 │ 40 │ 50 │
       └────┴────┴────┴────┴────┘
          ↑                             ↑
       Dequeue                       Enqueue
```

If the elements are inserted in this order:

```text
10 → 20 → 30 → 40 → 50
```

They will be removed in the same order:

```text
10 → 20 → 30 → 40 → 50
```

This is the basic **FIFO** principle.

---

## 🧠 Core Concepts

* Queue Data Structure
* FIFO Principle
* Array-based Queue
* Structures
* Pointers
* Dynamic Memory Allocation
* Enqueue
* Dequeue
* Queue Overflow
* Queue Underflow
* Memory Deallocation

---

## ⚠️ Overflow & Underflow

### Queue Overflow

When the queue reaches its maximum capacity, another element cannot be inserted.

```text
Queue Full
   ↓
Enqueue
   ↓
Overflow
```

### Queue Underflow

When the queue is empty, attempting to remove an element results in an underflow condition.

```text
Queue Empty
   ↓
Dequeue
   ↓
Underflow
```

Both implementations check these conditions using `isFull()` and `isEmpty()`.

---

## ⚖️ C vs C++ Implementation

| Feature             | C          | C++                   |
| ------------------- | ---------- | --------------------- |
| File                | `queue.c`  | `queue_using_c++.cpp` |
| Memory Allocation   | `malloc()` | `new`                 |
| Memory Deallocation | `free()`   | `delete[]`            |
| Output              | `printf()` | `cout`                |
| Input               | `scanf()`  | `cin`                 |
| Queue Structure     | `struct`   | `struct`              |

Both implementations follow the same queue logic while using their respective language features.

---

## ⏱️ Complexity Analysis

For a queue with capacity `n`:

| Operation |   Time |  Space |
| --------- | -----: | -----: |
| Enqueue   | `O(1)` | `O(1)` |
| Dequeue   | `O(1)` | `O(1)` |
| View      | `O(n)` | `O(1)` |
| isFull    | `O(1)` | `O(1)` |
| isEmpty   | `O(1)` | `O(1)` |

### Overall Space Complexity

The dynamically allocated array requires:

**`O(n)` space**

where `n` is the queue capacity.

---

## 💾 Memory Management

Both programs use dynamic memory allocation.

### C

```text
malloc()
   ↓
Use Queue
   ↓
free()
```

### C++

```text
new
 ↓
Use Queue
 ↓
delete[]
```

Proper memory deallocation is important to prevent memory leaks.

---

## 🎯 Learning Objective

This section is intended to build a practical understanding of:

* How a Queue works internally
* FIFO behaviour
* Enqueue and Dequeue operations
* Front and Rear management
* Queue overflow and underflow
* Dynamic memory allocation
* Implementing the same data structure in C and C++

---

## 🚀 Future Updates

More Queue implementations and related problems will be added as I continue learning and practicing **Data Structures and Algorithms**.

Future implementations may include other queue variations and applications.

---

**Author:** Ashraful Islam
