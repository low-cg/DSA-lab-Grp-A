# Tree

> A practical implementation of a Binary Search Tree (BST) using C, recursion, and dynamic memory allocation.

A **Tree** is a non-linear data structure used to represent hierarchical relationships between elements. A **Binary Search Tree (BST)** is a special binary tree where values in the left subtree are smaller than the root and values in the right subtree are larger.

This folder currently contains a Binary Search Tree implementation in C.

## 📂 Implementation

### `binary_search_tree.c`

The program implements a Binary Search Tree using a dynamically allocated `Node` structure.

Each node contains:
- `data` — stores the value
- `left` — points to the left child
- `right` — points to the right child

### Supported Operations

- Insert
- Inorder Traversal
- Preorder Traversal
- Postorder Traversal
- Search

The implementation uses **recursion** for insertion, searching, and tree traversals.

---

## 🌳 Binary Search Tree

A BST follows this rule:

```text
          Root
         /    \
   Smaller    Larger
```

Example:

```text
              50
            /    \
          30      70
         /  \    /  \
       20   40  60   80
```

For every node:

```text
Left Subtree < Root < Right Subtree
```

---

## 🔄 Tree Traversals

### Inorder

```text
Left → Root → Right
```

For the example above:

```text
20 30 40 50 60 70 80
```

In a BST, **Inorder Traversal produces the elements in sorted order**.

### Preorder

```text
Root → Left → Right
```

Output:

```text
50 30 20 40 70 60 80
```

### Postorder

```text
Left → Right → Root
```

Output:

```text
20 40 30 60 80 70 50
```

---

## 🔧 Operations & Complexity

| Operation | Average Case | Worst Case |
|-----------|--------------|------------|
| Insert | `O(log n)` | `O(n)` |
| Search | `O(log n)` | `O(n)` |
| Inorder | `O(n)` | `O(n)` |
| Preorder | `O(n)` | `O(n)` |
| Postorder | `O(n)` | `O(n)` |

Where `n` is the number of nodes.

### Space Complexity

The tree requires:

```text
O(n)
```

space for `n` nodes.

For recursive operations, the call stack depends on the tree height:

- Balanced tree → `O(log n)`
- Skewed tree → `O(n)`

---

## 🔍 Searching

BST searching uses the ordering property to eliminate unnecessary branches.

Example: searching for `60`

```text
              50
            /    \
          30      70
                 /
                60
```

Process:

```text
60 > 50  → Go Right
60 < 70  → Go Left
60 = 60  → Found
```

A balanced BST can therefore search much faster than a linear structure.

---

## ⬆️ Insertion

To insert a new value:

1. Start from the root.
2. Compare the value with the current node.
3. Move left if the value is smaller.
4. Move right if the value is larger.
5. Continue until an empty position is found.
6. Create the new node.

The BST property is preserved after insertion.

---

## 🧠 Concepts Covered

- Tree Data Structure
- Binary Tree
- Binary Search Tree
- Node Structure
- Pointers
- Dynamic Memory Allocation
- `malloc()`
- Recursion
- Tree Traversals
- Insertion
- Searching
- Time Complexity
- Space Complexity

---

## ⚖️ Binary Tree vs Binary Search Tree

| Feature | Binary Tree | Binary Search Tree |
|---------|-------------|--------------------|
| Maximum Children | 2 | 2 |
| Ordering Rule | Not required | Left < Root < Right |
| Searching | Generally `O(n)` | Average `O(log n)` |
| Sorted Inorder | Not guaranteed | Guaranteed |
| Main Advantage | Flexible hierarchy | Efficient searching |

---

## 📊 Balanced vs Skewed BST

### Balanced

```text
        50
       /  \
     30    70
    / \    / \
   20 40  60 80
```

Height is approximately `log₂(n)`.

```text
Search → O(log n)
Insert → O(log n)
```

### Skewed

```text
50
  \
   60
     \
      70
        \
         80
```

The tree behaves like a linked list.

```text
Search → O(n)
Insert → O(n)
```

This shows why tree balance has a major effect on BST performance.

---

## 💾 Memory Management

Each node is dynamically allocated using:

```c
malloc(sizeof(struct Node))
```

The node contains:

```text
        Node
     ┌─────────┐
     │  data   │
     ├─────────┤
     │  left   │
     ├─────────┤
     │  right  │
     └─────────┘
```

The `left` and `right` pointers connect the nodes and form the tree.

> **Note:** The current implementation demonstrates dynamic allocation but does not include a separate function to free every node of the tree before program termination.

---

## 🔁 Recursion in Tree Operations

Tree operations naturally fit recursive logic because every subtree is itself a smaller tree.

```text
Current Node
     ↓
Compare / Process
     ↓
Go Left or Right
     ↓
Recursive Call
     ↓
Base Condition
```

This approach makes the implementation simple and closely matches the hierarchical structure of a tree.

---

## 💡 Applications of BST

Binary Search Trees are useful in:

- Searching systems
- Maintaining sorted data
- Symbol tables
- Dictionary-like data structures
- Dynamic ordered sets
- Range-based searching

BSTs also provide a foundation for learning more advanced structures such as **AVL Trees** and **Red-Black Trees**.

---

## 🎯 Learning Objective

The main goal of this implementation is to understand:

- How a Binary Search Tree is structured
- How nodes are connected using pointers
- How insertion works recursively
- How searching uses the BST property
- How Inorder, Preorder, and Postorder traversals work
- Why Inorder Traversal produces sorted data
- How tree balance affects performance
- How recursion is applied to tree problems

---

## 🚀 Future Updates

This is the current Tree implementation in the repository.

More tree-related programs and implementations will be added as I continue learning and practicing **Data Structures & Algorithms**.

Future topics may include:

- Binary Tree
- Tree Deletion
- Level Order Traversal
- AVL Tree
- Tree Height
- Lowest Common Ancestor
- More Tree-based Problems

---

## 🛠️ Language

**C**

---

## 👤 Author

**Ashraful Islam**
