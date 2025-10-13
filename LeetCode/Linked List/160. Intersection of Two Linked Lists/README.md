# [160. Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)

**Difficulty:** Easy

---

## Problem Statement

Given the heads of two singly linked-lists `headA` and `headB`, return the node at which the two lists intersect.

If the two linked lists have no intersection at all, return `nullptr`.

---

## Examples

### Example 1

**Input:**
```
listA = [4,1,8,4,5], listB = [5,6,1,8,4,5]
```
**Output:**
```
Reference to node with value 8
```
**Explanation:**  
The two lists intersect at the node with value 8.

---

### Example 2

**Input:**
```
listA = [1,9,1,2,4], listB = [3,2,4]
```
**Output:**
```
Reference to node with value 2
```

---

### Example 3

**Input:**
```
listA = [2,6,4], listB = [1,5]
```
**Output:**
```
nullptr
```
**Explanation:**  
The two lists do not intersect.

---

## Constraints

- The number of nodes in listA is `m`.
- The number of nodes in listB is `n`.
- `0 <= m, n <= 3 * 10^4`
- `1 <= Node.val <= 10^5`
- Both listA and listB are acyclic.

---

## Approach

- Use two pointers `ptr1` and `ptr2` starting at `headA` and `headB`.
- Traverse each list; when a pointer reaches the end, redirect it to the head of the other list.
- If the lists intersect, the pointers will meet at the intersection node after at most `m + n` steps.
- If no intersection exists, both pointers will eventually be `nullptr`.

---

