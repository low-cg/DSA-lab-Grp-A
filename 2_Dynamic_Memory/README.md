# Dynamic Memory Allocation

> Exploring how C programs allocate, resize, access, and manage memory at runtime.

Dynamic Memory Allocation allows a program to request memory during **runtime** instead of deciding the required memory size beforehand.

This section contains two simple implementations that demonstrate the practical use of dynamic memory management in C.

---

## 📁 Programs

### `malloc.c`

A basic implementation of dynamic memory allocation using **`malloc()`**.

The program dynamically allocates memory according to the number of elements required by the user, stores the values, and accesses the allocated memory.

**Concepts:** `malloc()` • Pointers • Dynamic Array • `free()`

---

### `realloc.c`

An implementation that demonstrates how dynamically allocated memory can be **resized during runtime**.

The program initially allocates memory using `calloc()` and later expands the allocated memory using `realloc()` to accommodate additional elements.

**Concepts:** `calloc()` • `realloc()` • Pointers • Dynamic Memory • `free()`

---

## 🧩 Functions Explored

| Function    | Purpose                              |
| ----------- | ------------------------------------ |
| `malloc()`  | Allocates a block of memory          |
| `calloc()`  | Allocates and initializes memory     |
| `realloc()` | Changes the size of allocated memory |
| `free()`    | Releases allocated memory            |

---

## 🔍 What I Learned

* How dynamic memory allocation works in C
* How pointers interact with dynamically allocated memory
* How to create dynamic arrays
* How to resize allocated memory using `realloc()`
* Why allocated memory should be released using `free()`

---

## 💻 Language

**C**

---

## 📌 Note

This folder is part of my **Data Structures & Algorithms learning repository**. More implementations and experiments related to memory management will be added as I progress through the course.

---

**Author:** Ashraful Islam
