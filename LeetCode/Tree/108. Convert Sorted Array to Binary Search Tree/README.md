# [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

**Difficulty:** Easy

---

## Problem Statement

Given an integer array `nums` where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

---

## Examples

### Example 1

**Input:**
```
nums = [-10,-3,0,5,9]
```
**Output:**
```
[0,-3,9,-10,null,5]
```
**Explanation:**  
One possible answer is `[0,-3,9,-10,null,5]`, which represents the following height-balanced BST:
```
       0
      / \
    -3   9
    /   /
  -10  5
```

---

### Example 2

**Input:**
```
nums = [1,3]
```
**Output:**
```
[3,1]
```
**Explanation:**
```
   3
  /
 1
```
or
```
   1
    \
     3
```
Both are height-balanced BSTs.

---

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in a strictly increasing order.

---

## Approach

- Use a recursive algorithm to build the tree.
- Always choose the middle element as the root to ensure balance.
- Recursively build the left subtree from the left half and the right subtree from the right half.

---

