# [3021. Alice and Bob Playing Flower Game](https://leetcode.com/problems/alice-and-bob-playing-flower-game/)

**Difficulty:** Easy

---

## Problem Statement

Alice and Bob are playing a game with flowers.

- There are `n` flowers with 1 to `n` petals and `m` flowers with 1 to `m` petals.
- They take turns picking one flower each.
- **Alice wins** if the sum of the petals on both flowers is **odd**, otherwise Bob wins.

**Task:**  
Return the number of possible pairs `(x, y)` where Alice wins —  
that is, the number of pairs `(x, y)` such that `x + y` is odd,  
where `1 ≤ x ≤ n` and `1 ≤ y ≤ m`.

---

## Examples

### Example 1

**Input:**
```
n = 3, m = 2
```
**Output:**
```
3
```
**Explanation:**  
The pairs are `(1, 2)`, `(3, 2)`, and `(2, 1)`.  
Each gives an odd sum, so Alice wins in all three cases.

---

### Example 2

**Input:**
```
n = 1, m = 1
```
**Output:**
```
0
```
**Explanation:**  
The only pair `(1, 1)` gives a sum of 2, which is even.  
Hence, Alice cannot win.

---

## Constraints

- `1 <= n, m <= 10^5`

---

## Approach

To get an odd sum, one number must be odd and the other even.  
Count the odd and even numbers in both ranges:

- Odd numbers in `1..n`: `odd_n = n // 2 + n % 2`
- Even numbers in `1..n`: `even_n = n // 2`
- Odd numbers in `1..m`: `odd_m = m // 2 + m % 2`
- Even numbers in `1..m`: `even_m = m // 2`

Total winning pairs:  
`odd_n * even_m + even_n * odd_m`

---

