# [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/)

**Difficulty:** Easy

---

## Problem Statement

Given a non-negative integer `x`, return the integer square root of `x`.

The integer square root is the truncated integer part of the square root of `x`.

**Note:** You must not use any built-in exponent function or operator.

---

## Examples

### Example 1

**Input:**
```
x = 4
```
**Output:**
```
2
```

---

### Example 2

**Input:**
```
x = 8
```
**Output:**
```
2
```
**Explanation:**  
The square root of 8 is 2.82842..., and its integer part is 2.

---

### Example 3

**Input:**
```
x = 0
```
**Output:**
```
0
```

---

## Constraints

- `0 <= x <= 2^31 - 1`

---

## Approach

**Binary Search:**

- Handle edge case `x = 0`.
- Use binary search on range `[1, x]`.
- For `mid`, compare `mid * mid` with `x` using `x / mid` to avoid overflow.
- Adjust search range accordingly.
- Return `right` after the loop, which points to the integer square root.

---

