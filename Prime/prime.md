# 🧮 Prime Number Programs in C++

Welcome! This repository demonstrates multiple ways to check if a number is **prime** using C++.  
It also includes a program to find **all prime numbers within a given range**.

---

## 📖 What is a Prime Number?

A **prime number** is a natural number greater than 1 that has no positive divisors other than **1** and itself.  
**Examples:** `2, 3, 5, 7, 11, 13, ...`

---

## 🚀 Approaches Implemented

### 1️⃣ Basic Approach (Trial Division)

Checks divisibility from 1 to n.

```cpp
int count = 0;
for (int i = 1; i <= n; i++) {
    if (n % i == 0) count++;
}
if (count == 2) cout << "Prime";
else cout << "Not Prime";
```

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### 2️⃣ Optimized Approach (Square Root Method)

Only checks divisibility up to √n.

```cpp
for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
        cout << "Not Prime";
        return 0;
    }
}
cout << "Prime";
```

- **Time Complexity:** O(√n)
- **Space Complexity:** O(1)

### 3️⃣ Prime Numbers Between Two Numbers

Finds all prime numbers in a given range [first, last].

```cpp
int first = 10, last = 20;
for (int i = first; i <= last; i++) {
    bool isPrime = true;
    if (i <= 1) continue;
    for (int j = 2; j <= sqrt(i); j++) {
        if (i % j == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) cout << i << " ";
}
```

- **Time Complexity:** O((b-a) * √n)
- **Space Complexity:** O(1)

### 4️⃣ Improved Prime Check (Skipping Even Numbers)

Skips even numbers after checking 2.

```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
```

- **Time Complexity:** O(√n / 2)
- **Space Complexity:** O(1)

---

## 📝 Example Input & Output

**Input:**

```
n = 7
```

**Output:**

```
Prime
```


**Input:**

```
n = 10
```

**Output:**

```
Not Prime
```


**Input (Range):**

```
first = 10, last = 20
```

**Output:**

```
11 13 17 19
```

---

## ⚡ When to Use Which Approach?

- ✅ **Basic Approach** → For beginners / learning purpose
- ✅ **Square Root Method** → General use (efficient for small/medium numbers)
- ✅ **Range Method** → When finding primes between two numbers
- ✅ **Improved Check (Skip Evens)** → For very large numbers

---

## 📂 Files in This Repo

- `prime_basic.cpp` → Basic method
- `prime_optimized.cpp` → Square root method
- `prime_range.cpp` → Prime numbers between two numbers
- `prime_improved.cpp` → Improved method with skipping evens

---

## 📊 Complexity Comparison

| Approach                   | Time Complexity | Space Complexity |
|----------------------------|-----------------|------------------|
| Basic Trial Division        | O(n)            | O(1)             |
| Square Root Method         | O(√n)           | O(1)             |
| Prime Range (a to b)      | O((b-a)√n)      | O(1)             |
| Improved (Skip Evens)     | O(√n/2)         | O(1)             |

---

--
Created by Yashvi Dholakiya