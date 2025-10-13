# [27. Remove Element](https://leetcode.com/problems/remove-element/)

**Difficulty:** Easy

---

## Problem Statement

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in-place.

The relative order of the elements may be changed.

Return the number of elements in `nums` which are not equal to `val`.

**Do not allocate extra space for another array; you must do this by modifying the input array in-place with O(1) extra memory.**

---

## Examples

### Example 1

**Input:**
```
nums = [3,2,2,3], val = 3
```
**Output:**
```
2, nums = [2,2,_,_]
```
**Explanation:**  
Your function should return `k = 2`, with the first two elements of `nums` being 2.

---

### Example 2

**Input:**
```
nums = [0,1,2,2,3,0,4,2], val = 2
```
**Output:**
```
5, nums = [0,1,3,0,4,_,_,_]
```
**Explanation:**  
Your function should return `k = 5`, with the first five elements of `nums` being 0, 1, 3, 0, 4.

---

## Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

---

## Approach

- Use a pointer `index` to track the position to write the next non-`val` element.
- Iterate through the array, copying elements not equal to `val` to `nums[index]`.
- Increment `index` each time a non-`val` element is found.
- Return `index` as the count of elements not equal to `val`.

---

