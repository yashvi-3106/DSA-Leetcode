# [204. Count Primes](https://leetcode.com/problems/count-primes/)

**Difficulty:** Easy

---

## Problem Statement

Given an integer `n`, return the number of prime numbers that are strictly less than `n`.

---

## Examples

### Example 1

**Input:**
```
n = 10
```
**Output:**
```
4
```
**Explanation:**  
The prime numbers less than 10 are `[2, 3, 5, 7]`.

---

### Example 2

**Input:**
```
n = 0
```
**Output:**
```
0
```

---

### Example 3

**Input:**
```
n = 1
```
**Output:**
```
0
```

---

## Constraints

- `0 <= n <= 5 * 10^6`

---

## Approach

- Use the **Sieve of Eratosthenes** to mark non-prime numbers efficiently.
- Initialize a boolean array `isPrime` of size `n`, marking all numbers as true.
- Mark 0 and 1 as non-prime.
- For each number `i` from 2 to √n, if `i` is prime, mark all multiples of `i` as non-prime.
- Count all numbers still marked as prime.

---

