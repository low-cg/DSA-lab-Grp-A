# String Manipulation

> Exploring fundamental string operations and problem-solving techniques in C.

Strings are an essential part of programming and are widely used for storing and processing textual data. In C, strings are represented as arrays of characters terminated by a null character (`'\0'`).

This section contains several small implementations that focus on **string initialization, character traversal, palindrome checking, repeated string detection, and substring checking**.

---

## 📂 Programs

### 01. `string_initialize.c`

A basic program that demonstrates how a string can be initialized and processed as a character array.

The program initializes a string, calculates its length using `strlen()`, and then traverses the string character by character to display its contents.

**Concepts Covered**

* Character Array
* String Initialization
* `strlen()`
* String Traversal
* Character Access

---

### 02. `palindrome_string.c`

This program checks whether a given string is a **Palindrome**.

A palindrome is a string that remains the same when read from left to right and right to left.

For example:

```text id="s8r7ml"
abba
```

is a palindrome because:

```text id="7z5e1x"
a b b a
↑     ↑
a     a

  b b
  ↑ ↑
  b b
```

The implementation compares characters from opposite ends of the string and continues until the middle is reached.

**Concepts Covered**

* Palindrome
* Character comparison
* `strlen()`
* Boolean flag
* String traversal

---

### 03. `repeated_string.c`

This program checks whether a string consists of **two identical halves**.

For example:

```text id="w5v6u3"
abbaabba
```

can be divided into:

```text id="0w8p5k"
abba | abba
```

Since both halves are identical, the string is considered a repeated string.

The program compares corresponding characters from the first and second halves to determine whether the pattern is repeated.

**Concepts Covered**

* String length
* String partitioning
* Character comparison
* Repeated pattern detection
* Boolean logic

---

### 04. `substring_check.c`

This program focuses on checking whether one string or pattern occurs within another string.

Substring searching is a fundamental string-processing operation and is useful in many real-world applications such as text processing, searching, and pattern matching.

**Concepts Covered**

* Substring
* String traversal
* Character matching
* Pattern searching
* Nested iteration

---

# 🧠 Core Concepts

The programs in this section provide practice with several important string concepts:

* Character arrays
* String initialization
* String length
* String traversal
* Character comparison
* Palindrome detection
* Repeated pattern detection
* Substring searching
* Boolean conditions
* Loop-based string processing

---

# 🔍 String Representation in C

A string in C is stored as a sequence of characters followed by a **null character (`'\0'`)**.

For example:

```text id="q7k2y1"
"HELLO"

H   E   L   L   O   \0
↓   ↓   ↓   ↓   ↓    ↓
0   1   2   3   4    5
```

The null character marks the end of the string.

---

# ⚙️ Operations Covered

| Operation             | Description                        | Typical Complexity |
| --------------------- | ---------------------------------- | -----------------: |
| String Length         | Counts the number of characters    |             `O(n)` |
| Traversal             | Visits each character              |             `O(n)` |
| Character Comparison  | Compares characters                |             `O(1)` |
| Palindrome Check      | Compares characters from both ends |             `O(n)` |
| Repeated String Check | Compares two halves                |             `O(n)` |
| Substring Search      | Searches for a pattern             |         `O(n × m)` |

Where:

* `n` = length of the main string
* `m` = length of the substring/pattern

---

# 📊 Complexity Analysis

### Palindrome Checking

The program only needs to check approximately half of the string because every comparison involves two characters.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### Repeated String Checking

The program compares the first half of the string with the second half.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### String Traversal

Every character is visited once.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### Substring Searching

For a straightforward character-by-character pattern search, the worst-case complexity can be:

**Time Complexity:** `O(n × m)`

**Space Complexity:** `O(1)`

More advanced algorithms such as **KMP** can improve substring searching to `O(n + m)`.

---

# ⚖️ String Operations — Quick Comparison

| Problem               | Main Idea                      | Time Complexity |
| --------------------- | ------------------------------ | --------------: |
| String Initialization | Store characters in an array   |          `O(n)` |
| String Traversal      | Visit each character           |          `O(n)` |
| Palindrome            | Compare opposite characters    |          `O(n)` |
| Repeated String       | Compare two halves             |          `O(n)` |
| Substring Search      | Find a pattern inside a string |      `O(n × m)` |

---

# 🧩 Problem-Solving Approach

Although these programs solve different problems, they follow a similar process:

```text id="7h0y1u"
Input / Initialize String
          ↓
    Determine Length
          ↓
    Process Characters
          ↓
 Compare / Search / Check
          ↓
      Produce Result
```

This provides a foundation for understanding more advanced string algorithms later.

---

# 💡 Key Learnings

Through these implementations, the following ideas are practiced:

* How strings are represented in C
* How character arrays work
* How to determine string length
* How to traverse a string using loops
* How to compare characters
* How palindrome detection works
* How repeated patterns can be identified
* How substring searching works
* How to analyze string algorithms using Big-O notation

---

# 🛠️ Language & Tools

**Language:** C

**Standard Library Functions Used:**

```c
strlen()
```

Other programs primarily rely on loops, character comparison, and conditional logic to demonstrate the underlying concepts.

---

# 🎯 Learning Objective

The main objective of this section is to build a strong foundation in **string manipulation and character-based problem solving in C**.

These small implementations are intended to make the basic ideas clear before moving toward more advanced string algorithms and pattern-matching techniques.

---

# 🚀 Future Updates

This is the **current collection of String-related programs** in the repository.

More string problems, algorithms, and pattern-matching techniques will be added in the future as I continue learning and practicing **Data Structures & Algorithms**.

---

**Author:** Ashraful Islam
