# Heap

> A practical implementation of a Max Heap using C and array-based representation.

A **Heap** is a special tree-based data structure that follows a specific ordering property between parent and child nodes. It is commonly used in **Priority Queues, Heap Sort, Scheduling, and Graph Algorithms**.

This folder currently contains a practical implementation of a **Max Heap** using C.

---

## 📂 Implementation

### `implementation.c`

This program demonstrates the basic implementation and operations of a **Max Heap**.

A Max Heap maintains the following property:

> The value of every parent node is greater than or equal to the values of its children.

As a result, the **largest element is always present at the root** of the heap.

---

## 🌳 Max Heap Example

```text
             90
           /    \
         70      80
        /  \    /  \
      40   50  60   30
```

For the above heap:

```text
90 ≥ 70, 80
70 ≥ 40, 50
80 ≥ 60, 30
```

Therefore, it satisfies the Max Heap property.

---

## 🔢 Array Representation

A Binary Heap is generally stored using an array.

For **1-based indexing**, the relationships are:

| Node | Formula |
|------|---------|
| Parent | `i / 2` |
| Left Child | `2 * i` |
| Right Child | `2 * i + 1` |

---

## ⚙️ Fundamental Operations

| Operation | Description | Time Complexity |
|-----------|-------------|-----------------|
| Insert | Adds a new element to the heap | `O(log n)` |
| Delete Root | Removes the maximum element | `O(log n)` |
| Heapify | Restores the heap property | `O(log n)` |
| Access Maximum | Accesses the root element | `O(1)` |
| Display | Displays all heap elements | `O(n)` |

---

## ⬆️ Insertion in Max Heap

When a new element is inserted, it is initially placed at the end of the heap.

Then it is compared with its parent. If the new element is greater than its parent, they are swapped.

This process continues until the Max Heap property is restored.

This process is commonly called **Heapify Up**.

### Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## ⬇️ Deletion from Max Heap

In a Max Heap, deletion usually refers to removing the root element, which contains the maximum value.

The last element is moved to the root, and the heap property is restored by comparing it with its children.

This process is known as **Heapify Down**.

### Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## 📊 Complexity Analysis

For a heap containing `n` elements:

| Operation | Time Complexity |
|-----------|-----------------|
| Access Maximum | `O(1)` |
| Insert | `O(log n)` |
| Delete Maximum | `O(log n)` |
| Heapify | `O(log n)` |
| Display | `O(n)` |
| Search | `O(n)` |

### Space Complexity

Since the heap stores `n` elements in an array:

**Space Complexity: `O(n)`**

---

## ⚖️ Max Heap vs Min Heap

| Feature | Max Heap | Min Heap |
|---------|----------|----------|
| Root | Largest element | Smallest element |
| Parent Relation | Parent ≥ Children | Parent ≤ Children |
| Root Access | Maximum | Minimum |
| Main Use | Maximum Priority | Minimum Priority |

---

## 🧠 Concepts Covered

- Heap Data Structure
- Binary Heap
- Max Heap
- Complete Binary Tree
- Array Representation
- Heap Property
- Heapify Up
- Heapify Down
- Insertion
- Deletion
- Structures in C
- Pointers
- Time Complexity
- Space Complexity

---

## 💡 Applications of Heap

Heap is widely used in:

- **Priority Queue**
- **Heap Sort**
- **CPU Scheduling**
- **Task Scheduling**
- **Dijkstra's Algorithm**
- **Prim's Algorithm**
- Finding the **Kth Largest/Smallest Element**

---

## 🔍 Why Use a Heap?

One of the main advantages of a Heap is fast access to the highest-priority element.

For a Max Heap:

```text
Maximum Element → O(1)
```

Insertion and deletion can be performed efficiently in:

```text
O(log n)
```

This makes Heap useful when we repeatedly need to access and remove the maximum or minimum element.

---

## 🎯 Learning Objective

The main goal of this implementation is to understand:

- How a Heap is represented internally
- How a Complete Binary Tree can be represented using an array
- How the Max Heap property works
- How insertion maintains the heap property
- How deletion restores the heap property
- Why Heap operations have `O(log n)` complexity
- How Heap can be used in real-world algorithms

---

## 🚀 Future Updates

This is the current Heap implementation in the repository.

More Heap-related programs and implementations will be added in the future as I continue learning and practicing **Data Structures & Algorithms**.

Future topics may include:

- Min Heap
- Heap Sort
- Priority Queue
- Advanced Heap Problems

---

## 🛠️ Language

**C**

---

## 👤 Author

**Ashraful Islam**
