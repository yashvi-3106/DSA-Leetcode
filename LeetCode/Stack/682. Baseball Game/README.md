# [682. Baseball Game](https://leetcode.com/problems/baseball-game/)

**Difficulty:** Easy

---

## Problem Statement

You are keeping score for a baseball game with strange rules.  
The game consists of several rounds, where the scores for past rounds may affect future ones.

At the beginning of the game, you start with an empty record.  
You are given a list of strings `operations`, where each string represents one of four operations:

- An integer `x` — record a new score of `x`.
- `"+"` — record a new score that is the sum of the previous two scores.
- `"D"` — record a new score that is double the previous score.
- `"C"` — invalidate the previous score, removing it from the record.

Return the sum of all the scores on the record after performing all operations.

---

## Examples

### Example 1

**Input:**
```
operations = ["5","2","C","D","+"]
```
**Output:**
```
30
```
**Explanation:**
- Round 1: You record 5. → [5]
- Round 2: You record 2. → [5,2]
- Operation "C": Remove the previous score. → [5]
- Operation "D": Double the previous score. → [5,10]
- Operation "+": Add previous two scores. → [5,10,15]
- Sum = 30

---

### Example 2

**Input:**
```
operations = ["5","-2","4","C","D","9","+","+"]
```
**Output:**
```
27
```
**Explanation:**  
After all operations, the record becomes: [5, -2, -4, 9, 5, 14]  
Sum = 27

---

## Constraints

- `1 <= operations.length <= 1000`
- `operations[i]` is `"C"`, `"D"`, `"+"`, or a string representing an integer in range `[-3 * 10^4, 3 * 10^4]`.

---

## Approach

- Use a stack to maintain valid round scores.
- For each operation:
  - `"C"` → Remove the most recent score.
  - `"D"` → Push twice the last valid score.
  - `"+"` → Push the sum of the last two scores.
  - Otherwise → Convert the string to an integer and push it.
- Finally, sum all elements in the stack.

This ensures O(n) time complexity and O(n) space complexity.

---

