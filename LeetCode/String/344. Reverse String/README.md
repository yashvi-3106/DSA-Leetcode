# [344. Reverse String](https://leetcode.com/problems/reverse-string/)

**Difficulty:** Easy

---

## Problem Statement

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in place with O(1) extra memory.

---

## Examples

### Example 1

**Input:**
```
s = ["h","e","l","l","o"]
```
**Output:**
```
["o","l","l","e","h"]
```

---

### Example 2

**Input:**
```
s = ["H","a","n","n","a","h"]
```
**Output:**
```
["h","a","n","n","a","H"]
```

---

## Constraints

- `1 <= s.length <= 10^5`
- `s[i]` is a printable ASCII character.

---

## Approach

- Use two pointers, one at the start and one at the end of the array.
- Swap the characters at these pointers and move them towards each other until they meet.
- This reverses the array in place with O(1) extra memory.

---

