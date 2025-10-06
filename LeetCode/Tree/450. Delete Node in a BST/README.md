# [450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)

**Difficulty:** Medium

---

## Problem Statement

Given a root node reference of a Binary Search Tree (BST) and a key, delete the node with the given key in the BST.

Return the root node reference (possibly updated) of the BST.

The deletion can be divided into two stages:
1. Search for the node to remove.
2. If the node is found, delete the node.

---

## Examples

### Example 1

**Input:**
```
root = [5,3,6,2,4,null,7], key = 3
```
**Output:**
```
[5,4,6,2,null,null,7]
```
**Explanation:**  
Given key to delete = 3.  
So we find the node with value 3 and delete it.  
One valid answer is `[5,4,6,2,null,null,7]`, shown below:
```
    5                 5
   / \               / \
  3   6    --->     4   6
 / \                   \
2   4                   7
```

---

### Example 2

**Input:**
```
root = [5,3,6,2,4,null,7], key = 0
```
**Output:**
```
[5,3,6,2,4,null,7]
```
**Explanation:**  
The tree does not contain the node with key = 0, so no changes are made.

---

### Example 3

**Input:**
```
root = [], key = 0
```
**Output:**
```
[]
```

---

## Constraints

- The number of nodes in the tree is in the range `[0, 10^4]`.
- `-10^5 <= Node.val <= 10^5`
- Each node has a unique value.
- `root` is a valid binary search tree.
- `-10^5 <= key <= 10^5`

---

## Approach

- Search for the node with the given key.
- If the node is found:
  - If the node has no children, simply remove it.
  - If the node has one child, replace it with its child.
  - If the node has two children, replace it with its in-order successor (smallest node in the right subtree) or predecessor (largest node in the left subtree), then delete that successor/predecessor node recursively.

---
