# [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

**Difficulty:** Easy

---

## Problem Statement

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.

An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

---

## Examples

### Example 1

**Input:**
```
s = "()"
```
**Output:**
```
true
```

---

### Example 2

**Input:**
```
s = "()[]{}"
```
**Output:**
```
true
```

---

### Example 3

**Input:**
```
s = "(]"
```
**Output:**
```
false
```

---

## Constraints

- `1 <= s.length <= 10^4`
- `s` consists of parentheses only `'()[]{}'`.

---

## Approach

- Use a stack to keep track of opening brackets.
- For each character in the string:
  - If it's an opening bracket, push it onto the stack.
  - If it's a closing bracket, check if the stack is not empty and the top matches the corresponding opening bracket.
    - If not, return `false`.
    - Otherwise, pop the stack.
- At the end, if the stack is empty, the string is valid; otherwise, it's invalid.

---

