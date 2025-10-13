# [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)

**Difficulty:** Easy

---

## Problem Statement

Given the head of a singly linked list, return `true` if it is a palindrome or `false` otherwise.

---

## Examples

### Example 1

**Input:**
```
head = [1,2,2,1]
```
**Output:**
```
true
```

---

### Example 2

**Input:**
```
head = [1,2]
```
**Output:**
```
false
```

---

## Constraints

- The number of nodes in the list is in the range `[1, 10^5]`.
- `0 <= Node.val <= 9`

---

## Approach

- Traverse the linked list and store the values in a vector.
- Use two pointers (`i` at the start, `j` at the end) to compare values from both ends.
- If all corresponding values match, the list is a palindrome; otherwise, it is not.

---
