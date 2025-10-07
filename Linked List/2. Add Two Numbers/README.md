# [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)

**Difficulty:** Medium

---

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers.

The digits are stored in reverse order, and each of their nodes contains a single digit.

Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zeros, except the number 0 itself.

---

## Examples

### Example 1

**Input:**
```
l1 = [2,4,3], l2 = [5,6,4]
```
**Output:**
```
[7,0,8]
```
**Explanation:**  
342 + 465 = 807 (reverse order: [7,0,8])

---

### Example 2

**Input:**
```
l1 = [0], l2 = [0]
```
**Output:**
```
[0]
```

---

### Example 3

**Input:**
```
l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
```
**Output:**
```
[8,9,9,9,0,0,0,1]
```

---

## Constraints

- The number of nodes in each linked list is in the range `[1, 100]`.
- `0 <= Node.val <= 9`
- It is guaranteed that the list represents a number without leading zeros.

---

## Approach

- Use a dummy node to simplify the linked list construction.
- Traverse both lists simultaneously, adding values along with carry.
- If one list is longer, continue adding its remaining nodes.
- After the loop, if there is a remaining carry, append a new node.
- Return `dummy->next` as the head of the resulting list.

---
