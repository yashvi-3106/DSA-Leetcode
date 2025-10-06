# [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)

**Difficulty:** Easy

---

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

---

## Examples

### Example 1

**Input:**
```
s = "anagram", t = "nagaram"
```
**Output:**
```
true
```

---

### Example 2

**Input:**
```
s = "rat", t = "car"
```
**Output:**
```
false
```

---

## Constraints

- `1 <= s.length, t.length <= 5 * 10^4`
- `s` and `t` consist of lowercase English letters.

---

## Approach

**Method 1: Using a single frequency map**

- If the lengths are different, return `false`.
- Use a map (or array) to count the frequency of each character in `s`.
- Decrement the count for each character in `t`.
- If any count goes negative, return `false`.
- Otherwise, return `true`.

**Alternate methods:**
- Using two maps and comparing.
- Using a fixed-size array of 26 letters to count frequencies.

---

