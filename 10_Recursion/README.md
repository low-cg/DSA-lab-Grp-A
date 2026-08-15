# Recursion

> Understanding recursion through a practical Fibonacci sequence implementation in C.

**Recursion** is a programming technique where a function calls itself to solve a problem by breaking it into smaller versions of the same problem.

This folder currently contains a recursive implementation of the **Fibonacci Sequence** using C.

---

## 📂 Implementation

### `febonaqqi_using_recursion.c`

This program generates Fibonacci numbers using a recursive function:

```c
void fibo(int n, int a, int b)
```

The function uses three parameters:

- `n` — number of Fibonacci terms remaining
- `a` — current Fibonacci number
- `b` — next Fibonacci number

The program starts with:

```text
a = 0
b = 1
```

and repeatedly calls itself using:

```text
fibo(n - 1, b, a + b)
```

---

## 🔢 Fibonacci Sequence

The Fibonacci sequence is a sequence where each number is obtained by adding the previous two numbers.

```text
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
```

The basic mathematical relationship is:

```text
F(n) = F(n - 1) + F(n - 2)
```

The implementation in this folder uses a **tail-recursive style** with two running values (`a` and `b`) instead of calculating the same Fibonacci values repeatedly.

---

## ⚙️ How the Program Works

Suppose the input is:

```text
5
```

The function starts as:

```text
fibo(5, 0, 1)
```

### Step 1

```text
n = 5
print 0

fibo(4, 1, 1)
```

### Step 2

```text
n = 4
print 1

fibo(3, 1, 2)
```

### Step 3

```text
n = 3
print 1

fibo(2, 2, 3)
```

### Step 4

```text
n = 2
print 2

fibo(1, 3, 5)
```

### Step 5

```text
n = 1
print 3

fibo(0, 5, 8)
```

At `n == 0`, the function returns.

### Output

```text
0 1 1 2 3
```

---

## 🔄 Recursion Flow

The basic flow of the program is:

```text
Input n
   ↓
fibo(n, 0, 1)
   ↓
Check n == 0
   ↓
Print a
   ↓
fibo(n-1, b, a+b)
   ↓
Repeat
   ↓
n becomes 0
   ↓
Return
```

The **base condition** is:

```c
if(n == 0) return;
```

Without a proper base condition, a recursive function may continue calling itself indefinitely.

---

## 🧠 Important Recursion Concepts

### 1. Base Case

The base case stops recursion.

In this program:

```c
if(n == 0) return;
```

When `n` reaches `0`, no further recursive call is made.

### 2. Recursive Case

The recursive case is:

```c
return fibo(n-1, b, a+b);
```

Here, the function calls itself with a smaller value of `n`.

### 3. State Passing

Instead of recalculating previous Fibonacci numbers, the current and next values are passed through `a` and `b`.

```text
Current → a
Next    → b
```

Then:

```text
New Current = b
New Next    = a + b
```

---

## 📊 Complexity Analysis

For generating `n` Fibonacci terms using this implementation:

| Operation | Complexity |
|-----------|------------|
| Time | `O(n)` |
| Auxiliary Space | `O(n)` |
| Number of Recursive Calls | `n + 1` |

### Time Complexity

The function makes one recursive call for each Fibonacci term.

Therefore:

```text
Time Complexity = O(n)
```

This is significantly more efficient than the traditional naive recursive Fibonacci implementation, which has exponential time complexity.

### Space Complexity

Each recursive call remains on the call stack until it returns.

Therefore:

```text
Auxiliary Space = O(n)
```

---

## ⚖️ Recursive vs Iterative Fibonacci

| Feature | Recursive (This Implementation) | Iterative |
|---------|----------------------------------|-----------|
| Approach | Function calls itself | Loop |
| Time | `O(n)` | `O(n)` |
| Auxiliary Space | `O(n)` | `O(1)` |
| Code Style | More recursive | Usually simpler |
| Stack Usage | Required | Minimal |

The recursive approach is useful for learning recursion, while an iterative approach is generally more memory-efficient for large `n`.

---

## ⚠️ Important Note

This program uses:

```c
int
```

for Fibonacci values.

Since the `int` data type has a limited range, sufficiently large Fibonacci values can cause **integer overflow**.

For larger values, a wider integer type such as `long long` or an arbitrary-precision approach may be required.

---

## 🧩 Concepts Covered

This implementation provides practice with:

- Recursion
- Base Case
- Recursive Case
- Function Calls
- Fibonacci Sequence
- Tail-recursive style
- Parameter passing
- Call Stack
- Time Complexity
- Space Complexity
- Integer Overflow

---

## 🎯 Learning Objective

The main objective of this program is to understand:

- What recursion is
- How a recursive function calls itself
- How a base case stops recursion
- How parameters can maintain state between recursive calls
- How recursion uses the call stack
- How to analyze the time and space complexity of recursive programs

---

## 🚀 Future Updates

This is the current Recursion implementation in the repository.

More recursion-based problems and algorithms will be added as I continue learning and practicing **Data Structures & Algorithms**.

Future topics may include:

- Factorial using Recursion
- Sum of Natural Numbers
- Power Calculation
- GCD using Recursion
- Recursive Binary Search
- Tower of Hanoi
- More Recursion Problems

---

## 🛠️ Language

**C**

---

## 👤 Author

**Ashraful Islam**
