# Linked List

> A practical implementation of a Singly Linked List using C, structures, pointers, and dynamic memory allocation.

A **Linked List** is a linear data structure where elements are stored in separate nodes rather than in contiguous memory locations. Each node contains data and a pointer that connects it to the next node.

This folder currently contains a **Singly Linked List** implementation in C.

---

## 📂 Implementation

### `linked_list.c`

The program implements a Singly Linked List using a `Node` structure.

Each node contains:

```text
┌──────────┬──────────┐
│   data   │   next   │
└──────────┴──────────┘
```

The `data` field stores the value, while the `next` pointer stores the address of the next node.

The program demonstrates:

- Creating nodes
- Inserting elements at the end
- Displaying the linked list
- Deleting a specific value
- Searching for a value

---

## 🔗 How a Singly Linked List Works

A linked list can be represented as:

```text
HEAD
 ↓
┌────┬─────┐    ┌────┬─────┐    ┌────┬─────┐
│ 10 │  ●──┼───→│ 20 │  ●──┼───→│ 30 │ NULL│
└────┴─────┘    └────┴─────┘    └────┴─────┘
```

The `head` pointer keeps track of the first node.

Each node points to the next node, and the last node points to `NULL`, indicating the end of the list.

---

## ⚙️ Operations Implemented

### 1. Create Node

A new node is created dynamically using:

```c
malloc(sizeof(struct Node))
```

The new node receives a data value and its `next` pointer is initially set to `NULL`.

**Time Complexity:** `O(1)`

---

### 2. Insert at End

The program inserts new elements at the end of the linked list.

For example:

```text
Before:

10 → 20 → 30 → NULL

Insert 40

After:

10 → 20 → 30 → 40 → NULL
```

Since the implementation does not maintain a separate `tail` pointer, it traverses the list to find the last node.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)` auxiliary space

---

### 3. Display

The `display()` function starts from `head` and traverses the list until `NULL`.

Example:

```text
Linked List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
```

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 4. Delete by Value

The `deleteValue()` function searches for a specific value and removes the corresponding node.

For example:

```text
Before:

10 → 20 → 30 → 40 → 50 → NULL

Delete 30

After:

10 → 20 → 40 → 50 → NULL
```

The links are adjusted so that the node before the deleted node points directly to the node after it.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 5. Search

The `search()` function checks each node sequentially until the requested value is found or the list ends.

Example:

```text
Search: 40

10 → 20 → 30 → 40 → 50
                  ↑
                Found
```

The program also reports the position of the found element.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

## 📊 Complexity Analysis

For a linked list containing `n` nodes:

| Operation | Time Complexity | Extra Space |
|-----------|-----------------|-------------|
| Create Node | `O(1)` | `O(1)` |
| Insert at End | `O(n)` | `O(1)` |
| Display | `O(n)` | `O(1)` |
| Search | `O(n)` | `O(1)` |
| Delete by Value | `O(n)` | `O(1)` |

The overall memory required for storing `n` nodes is:

**Space Complexity: `O(n)`**

---

## ⚖️ Linked List vs Array

| Feature | Array | Linked List |
|---------|-------|-------------|
| Memory | Contiguous | Non-contiguous |
| Size | Usually fixed | Dynamic |
| Random Access | `O(1)` | `O(n)` |
| Search | `O(n)` | `O(n)` |
| Insert at Beginning | `O(n)` | `O(1)` |
| Delete at Beginning | `O(n)` | `O(1)` |
| Extra Memory | Low | Extra pointer required |

### Main Difference

An array provides fast random access because its elements are stored in contiguous memory.

A linked list provides flexible memory usage because nodes can be allocated independently and connected using pointers.

---

## 🧠 Concepts Covered

This implementation provides practical experience with:

- Linked List
- Singly Linked List
- Nodes
- Structures in C
- Pointers
- Dynamic Memory Allocation
- `malloc()`
- `free()`
- Traversal
- Insertion
- Deletion
- Searching
- Memory Management
- Time Complexity
- Space Complexity

---

## 💾 Dynamic Memory Management

Unlike a fixed-size array, the linked list creates nodes dynamically as needed.

The basic process is:

```text
Request Memory
      ↓
Create Node
      ↓
Store Data
      ↓
Connect Node
      ↓
Use the List
      ↓
Delete / Free Nodes
```

The current implementation uses `malloc()` when creating nodes and `free()` when deleting a node.

---

## 🔍 Current Program Flow

The current `main()` function creates the following list automatically:

```text
10 → 20 → 30 → 40 → 50 → NULL
```

Then it:

1. Displays the initial list.
2. Deletes the value `30`.
3. Displays the updated list.
4. Searches for `40`.
5. Searches for `30`.

Expected behaviour:

```text
Initial List:
10 → 20 → 30 → 40 → 50 → NULL

After deleting 30:
10 → 20 → 40 → 50 → NULL

Searching 40:
40 found

Searching 30:
30 not found
```

No user menu or manual operation selection is required in the current implementation; the operations are predefined in `main()`.

---

## 🎯 Learning Objective

The main goal of this implementation is to understand:

- How linked lists are structured
- How nodes are connected using pointers
- How dynamic memory allocation works
- How insertion and deletion modify links
- How sequential searching works
- Why linked lists do not support direct random access
- How the performance of linked lists differs from arrays

---

## 🚀 Future Updates

This is the current Linked List implementation in the repository.

More linked-list programs and variations will be added as I continue learning and practicing **Data Structures & Algorithms**.

Future topics may include:

- Insertion at Beginning
- Insertion at a Specific Position
- Deletion from Beginning
- Deletion from End
- Doubly Linked List
- Circular Linked List
- Linked List Reversal
- More Linked List Problems

---

## 🛠️ Language

**C**

---

## 👤 Author

**Ashraful Islam**
