# [58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/)

**Difficulty:** Easy

---

## Problem Statement

Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

---

## Examples

### Example 1

**Input:**
```
s = "Hello World"
```
**Output:**
```
5
```
**Explanation:**  
The last word is `"World"`, which has length 5.

---

### Example 2

**Input:**
```
s = "   fly me   to   the moon  "
```
**Output:**
```
4
```
**Explanation:**  
The last word is `"moon"`, which has length 4.

---

### Example 3

**Input:**
```
s = "luffy is still joyboy"
```
**Output:**
```
6
```
**Explanation:**  
The last word is `"joyboy"`, which has length 6.

---

## Constraints

- `1 <= s.length <= 10^4`
- `s` consists of only English letters and spaces `' '`.
- There will be at least one word in `s`.

---

## Approach

- Start from the end of the string.
- Skip all trailing spaces.
- Count the number of characters until the next space (or beginning of the string).
- Return that count as the length of the last word.

---

