# [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

**Difficulty:** Easy

---

## 🧩 Problem Statement

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.  
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must place the result in the first part of the array `nums`.  
More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result.

Return `k` after placing the final result in the first `k` slots of `nums`.

**Do not allocate extra space for another array** — you must do this by modifying the input array in-place with O(1) extra memory.

---

## 🔍 Examples

### Example 1

**Input:**
```
nums = [1,1,2]
```
**Output:**
```
2, nums = [1,2,_]
```
**Explanation:**  
Your function should return `k = 2`, with the first two elements of `nums` being 1 and 2 respectively.  
It does not matter what you leave beyond the returned k (hence they are represented as `_`).

---

### Example 2

**Input:**
```
nums = [0,0,1,1,1,2,2,3,3,4]
```
**Output:**
```
5, nums = [0,1,2,3,4,_,_,_,_,_]
```
**Explanation:**  
Your function should return `k = 5`, with the first five elements of `nums` being 0, 1, 2, 3, and 4.

---

## ⚙️ Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.

---

## Approach

- Use two pointers: one (`i`) for the position of the last unique element, and another (`j`) to iterate through the array.
- When `nums[j]` is different from `nums[i]`, increment `i` and set `nums[i] = nums[j]`.
- After the loop, return `i + 1` as the count of unique elements.

---