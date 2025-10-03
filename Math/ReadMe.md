# 🌸 Alice and Bob Playing Flower Game (LeetCode 3021)

## 📌 Problem Summary

Alice and Bob are playing with `n` and `m` flowers.

- Alice picks a flower from the first `n` flowers.
- Bob picks a flower from the next `m` flowers.

Alice wins if the sum of petals is **odd**, Bob wins if it’s **even**.

**Question:** Count the total number of pairs where Alice wins.

## 🔍 Key Observation

- Odd + Even = Odd ✅ (Alice wins)
- Even + Odd = Odd ✅ (Alice wins)
- Odd + Odd = Even ❌ (Bob wins)
- Even + Even = Even ❌ (Bob wins)

Alice wins only when **one flower has odd petals and the other has even petals**.

## 🚀 Approach

1. Count odd and even numbers in range [1…n]:
   - `odd_n = (n + 1) / 2`
   - `even_n = n / 2`

2. Count odd and even numbers in range [1…m]:
   - `odd_m = (m + 1) / 2`
   - `even_m = m / 2`

3. Alice winning pairs = `odd_n * even_m + odd_m * even_n`

## ✅ Dry Run Example

**Example:** n = 3, m = 4

- Numbers for n=3: {1, 2, 3}
  - Odd = {1, 3} → `odd_n = 2`
  - Even = {2} → `even_n = 1`

- Numbers for m=4: {1, 2, 3, 4}
  - Odd = {1, 3} → `odd_m = 2`
  - Even = {2, 4} → `even_m = 2`

**Winning Pairs Calculation:**

- `odd_n * even_m = 2 * 2 = 4`
- `odd_m * even_n = 2 * 1 = 2`
- **Total = 6**

**Valid Winning Pairs (Alice wins):**

- (1,2), (1,4), (3,2), (3,4)  // Odd from n + Even from m
- (2,1), (2,3)                 // Even from n + Odd from m

✅ **Answer = 6**

## ⏱ Complexity

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

## 💻 Code Implementation

```cpp
class Solution {
public:
    long long flowerGame(int n, int m) {
        long long odd_n = (n + 1) / 2;
        long long even_n = n / 2;
        long long odd_m = (m + 1) / 2;
        long long even_m = m / 2;

        return odd_n * even_m + odd_m * even_n;
    }
};
```
