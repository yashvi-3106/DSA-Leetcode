# [1598. Crawler Log Folder](https://leetcode.com/problems/crawler-log-folder/)

**Difficulty:** Easy

---

## Problem Statement

The Leetcode file system keeps a log of every folder change operation. The operations are represented by a list of strings `logs` where:

- `"../"` : Move to the parent folder. If you are already in the main folder, remain in the main folder.
- `"./"` : Stay in the current folder.
- `"x/"` : Move to a child folder named `x` (this is guaranteed to always be a valid folder name).

You start in the main folder, and your task is to return the minimum number of operations needed to return to the main folder after performing all the operations in `logs`.

---

## Examples

### Example 1

**Input:**
```
logs = ["d1/","d2/","../","d21/","./"]
```
**Output:**
```
2
```
**Explanation:**  
Move into "d1/", then "d2/", go back to "d1/", move into "d21/", stay in "d21/".  
You are two folders deep.

---

### Example 2

**Input:**
```
logs = ["d1/","d2/","./","d3/","../","d31/"]
```
**Output:**
```
3
```

---

### Example 3

**Input:**
```
logs = ["d1/","../","../","../"]
```
**Output:**
```
0
```
**Explanation:**  
You cannot go above the main folder.

---

## Constraints

- `1 <= logs.length <= 200`
- `2 <= logs[i].length <= 10`
- `logs[i]` contains only lowercase letters, `"./"`, or `"../"`
- `logs[i]` ends with `'/'`

---

## Approach

- Use a stack to simulate folder navigation.
- For each log:
  - If `"../"`: pop from the stack if not empty (move up).
  - If `"./"`: do nothing (stay).
  - Else: push the folder name onto the stack (move down).
- The size of the stack after processing all logs is the answer.

---
