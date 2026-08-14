# Searching Algorithms

> Searching is one of the fundamental operations in Data Structures and Algorithms, used to determine whether a particular element exists within a collection of data.

This section focuses on **Searching Algorithms** and contains an implementation of **Binary Search** using C++.

---

## 📂 Program

### `binary_search.cpp`

This program demonstrates the basic idea of **Binary Search**.

The program:

1. Takes the size of the array.
2. Takes the array elements as input.
3. Sorts the array in ascending order.
4. Takes a target value from the user.
5. Uses `low`, `high`, and `mid` to search for the target.
6. Displays whether the target value is found or not.

The program uses the C++ Standard Template Library's `sort()` function to arrange the elements before searching.

---

## 🔎 Binary Search

Binary Search is an efficient searching technique that works on a **sorted array**.

Instead of checking every element one by one, Binary Search repeatedly divides the search range into two halves.

```text
Sorted Array
     ↓
Find Middle Element
     ↓
Compare With Target
     ↓
 ┌───────────────┐
 ↓               ↓
Left Half      Right Half
     ↓               ↓
       Repeat
         ↓
   Found / Not Found
```

---

## 🧠 Concepts Used

* Arrays
* Sorting
* Binary Search
* Iteration
* `low`, `high`, `mid`
* C++ STL
* `sort()`
* Time Complexity
* Space Complexity

---

## ⚙️ Algorithm

```text
1. Take the array size.
2. Input the array elements.
3. Sort the array in ascending order.
4. Set low = 0.
5. Set high = n - 1.
6. Calculate mid = (low + high) / 2.
7. Compare the target with the middle element.
8. If the target is greater, search the right half.
9. If the target is smaller, search the left half.
10. If the target matches, the element is found.
11. If low becomes greater than high, the element is not found.
```

---

## ⏱️ Complexity Analysis

For a sorted array containing `n` elements:

| Operation     | Time Complexity |
| ------------- | --------------: |
| Sorting       |    `O(n log n)` |
| Binary Search |      `O(log n)` |
| Array Input   |          `O(n)` |
| Overall       |    `O(n log n)` |
| Space         |          `O(n)` |

### Why is the overall complexity `O(n log n)`?

The program first sorts the array using `sort()`, which takes approximately `O(n log n)` time.

After sorting, Binary Search takes `O(log n)` time.

Therefore:

```text
Sorting + Searching
= O(n log n) + O(log n)
= O(n log n)
```

---

## ⚖️ Linear Search vs Binary Search

| Feature          | Linear Search       | Binary Search        |
| ---------------- | ------------------- | -------------------- |
| Data Requirement | No sorting required | Sorted data required |
| Best Case        | `O(1)`              | `O(1)`               |
| Average Case     | `O(n)`              | `O(log n)`           |
| Worst Case       | `O(n)`              | `O(log n)`           |
| Approach         | Sequential          | Divide and Conquer   |
| Suitable For     | Small/unsorted data | Large/sorted data    |

### Key Difference

**Linear Search** checks elements one after another.

**Binary Search** eliminates half of the remaining search space after each comparison, making it significantly faster for large sorted datasets.

---

## 💡 Example

For the following array:

```text
10 20 30 40 50 60 70
```

Searching for:

```text
60
```

Binary Search does not need to check every element.

```text
Step 1 → Middle = 40
          60 > 40
          Search Right Half

Step 2 → Middle = 60
          Found
```

This is the main advantage of Binary Search.

---

## ⚠️ Important Note

Binary Search requires the data to be **sorted** before searching.

In this implementation, the array is sorted using:

```cpp
sort(ar, ar + n);
```

The current implementation is intended as a practice implementation for understanding the Binary Search concept and its basic control flow.

---

## 🎯 Learning Objective

The main objective of this program is to understand:

* How Binary Search works
* Why sorted data is important
* How `low`, `high`, and `mid` control the search range
* How divide-and-conquer reduces the number of comparisons
* The difference between Linear Search and Binary Search
* The effect of sorting on overall algorithm complexity

---

## 🚀 Future Updates

More searching algorithms and related problem-solving implementations will be added to this section as I continue learning and practicing Data Structures and Algorithms.

---

**Author:** Ashraful Islam
